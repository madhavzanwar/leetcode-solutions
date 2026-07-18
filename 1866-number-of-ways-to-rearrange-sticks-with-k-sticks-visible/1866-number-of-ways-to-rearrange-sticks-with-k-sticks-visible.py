class Solution:
    def rearrangeSticks(self, n, k):
        mod = 10**9 + 7
        dp = [1] + [0] * (k-1)
        for i in range(1, n):
            for j in range(min(i, k-1), 0, -1):
                dp[j] = (i * dp[j] + dp[j-1]) % mod
            dp[0] = (i * dp[0]) % mod
        return dp[-1]