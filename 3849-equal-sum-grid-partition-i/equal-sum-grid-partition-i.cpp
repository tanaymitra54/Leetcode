class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        long long totalSum = 0;
        for(int i =0 ; i<n; i++){
            for(int j = 0; j<m ; j++){
                totalSum += grid[i][j];
            }
        }

        //upper/horizontal cut check
        long long upperSum = 0;
        for(int i = 0; i<n-1;i++){
            for(int j =0;j<m; j++){
                upperSum += grid[i][j];
            }
            if(upperSum*2 == totalSum) return true;
        }

        long long leftSum = 0;
        for(int j=0; j<m-1; j++){
            for(int i = 0; i<n; i++){
                leftSum += grid[i][j];
            }
            if(leftSum*2 == totalSum) return true;
        }

        return false;


    }
};