class Solution:
    def maxActiveSectionsAfterTrade(self, s: str, queries: List[List[int]]) -> List[int]:
        # Generating segments of 1s and 0s
        # Store start index and size of each segment
        N = len(s)
        segs = [0] * N
        segs[0] = idx = int(s[0])
        seg_start = {}
        seg_start[idx] = 0
        for i in range(1,N):
            if s[i] != s[i-1]:
                idx += 1
                seg_start[idx] = i
            segs[i] = idx
        seg_sizes = Counter(segs)
        
        # Iterative Seg tree construction
        seg_tree = []
        if 0 not in seg_sizes: seg_sizes[0] = 0 # Edge case when string starts with 1 (we want seg tree start index to be 0)
        for i in range(2, idx+2, 2):
            if i not in seg_sizes: break
            seg_tree.append(seg_sizes[i] + seg_sizes[i-2])
        S = len(seg_tree)
        seg_tree = [0] * S + seg_tree
        # Seg tree stores the max value of a pair of adjacent 0 segs
        for j in range(S-1, 0, -1): seg_tree[j] = max(seg_tree[j<<1], seg_tree[(j<<1)+1])

        # Iterative seg tree queries
        def query(sid, eid):
            ret = 0
            sid += S
            eid += S
            while sid < eid:
                if sid & 1:
                    ret = max(ret, seg_tree[sid])
                    sid += 1
                if eid & 1:
                    eid -= 1
                    ret = max(ret, seg_tree[eid])
                sid >>= 1
                eid >>= 1
            return ret
        
        def_res = s.count('1') # Min answer
        def process(l, r):
            ret = def_res
            # Handle some edge cases and compute without seg tree
            if segs[r] - segs[l] < 2 or segs[r] - segs[l] == 2 and segs[r] & 1: return def_res
            if segs[r] - segs[l] == 2 and not segs[r] & 1: return r - seg_start[segs[r]] + 1 + seg_start[segs[l]+1] - l + ret
            
            p1 = p2 = 0 # If start/end segment is a zero segment, gotta try using them in trades too (even if incomplete)
            if not segs[l] & 1: p1 = seg_sizes[segs[l]+2] + seg_start[segs[l]+1] - l
            if not segs[r] & 1: p2 = seg_sizes[segs[r]-2] + r - seg_start[segs[r]] + 1
            return max(p1, p2, query((segs[l]+2)//2 if segs[l]+1&1 else (segs[l]+1)//2, (segs[r]-2)//2 if segs[r]-1&1 else (segs[r]-1)//2)) + ret

        # Process each query
        ret = []
        for l, r in queries: ret.append(process(l, r))
        return ret