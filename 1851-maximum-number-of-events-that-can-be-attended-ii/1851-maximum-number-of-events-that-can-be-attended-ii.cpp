class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(), events.end());
        int n = events.size();
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
        vector<int> startTimes(n);
        for (int i = 0; i < n; ++i) {
            startTimes[i] = events[i][0];
        }

        for (int i = n - 1; i >= 0; --i) {
            for (int j = 1; j <= k; ++j) {
                int low = i + 1, high = n, next = n;
                while (low < high) {
                    int mid = (low + high) / 2;
                    if (events[mid][0] > events[i][1]) {
                        next = mid;
                        high = mid;
                    } else {
                        low = mid + 1;
                    }
                }
                int take = events[i][2] + dp[next][j - 1];
                int skip = dp[i + 1][j];
                dp[i][j] = max(take, skip);
            }
        }
        return dp[0][k];
    }
};
