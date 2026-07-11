from collections import defaultdict

class Solution(object):
    def countCompleteComponents(self, n, edges):
        def dfs(v, res):
            if v in visit:
                return res

            visit.add(v)
            res.append(v)

            for nei in adj[v]:
                dfs(nei, res)

            return res

        adj = defaultdict(list)

        for v1, v2 in edges:
            adj[v1].append(v2)
            adj[v2].append(v1)

        visit = set()
        ans = 0

        for v in range(n):
            if v in visit:
                continue

            component = dfs(v, [])

            flag = True
            for node in component:
                if len(adj[node]) != len(component) - 1:
                    flag = False
                    break

            if flag:
                ans += 1

        return ans