class Solution {
public:
    vector<vector<int>>flip(vector<vector<int>>&square,int k){
        int top = 0;
        int bottom = k-1;
        while(top<bottom){
            swap(square[top++],square[bottom--]);
        }
        return square;
            
    }
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        vector<vector<int>>square(k, vector<int>(k));
        for(int i = 0 ; i<k ; i++){
            for(int j = 0; j<k ; j++){
                square[i][j] = grid[x + i][y + j];
            }
        }
        square = flip(square,k);
        for(int i = 0; i < k; i++)
        for(int j = 0; j < k; j++)
            grid[x + i][y + j] = square[i][j];

        return grid;
        
    }
};