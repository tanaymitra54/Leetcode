class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();    // rows
        int m = grid[0].size(); // columns

        long long total = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                total += grid[i][j];

        // Try all horizontal splits (after row i)
        long long topSum = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m; j++)
                topSum += grid[i][j];
            if (topSum * 2 == total) return true;
        }

        // Try all vertical splits (after column j)
        long long leftSum = 0;
        for (int j = 0; j < m - 1; j++) {
            for (int i = 0; i < n; i++)
                leftSum += grid[i][j];
            if (leftSum * 2 == total) return true;
        }

        return false;
    }
};