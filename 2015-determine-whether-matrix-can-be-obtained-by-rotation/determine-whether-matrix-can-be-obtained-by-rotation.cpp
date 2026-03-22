class Solution {
public:
void transpose(vector<vector<int>>&matrix,int k){
    //transpose of a matrix 
    for(int i =0 ; i<k;i++){
        for(int j = i + 1 ; j<k;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    //swap the rows and columns 
    for(int i =0 ; i<k ;i++){
        for(int j=0; j< k / 2; j++){
            swap(matrix[i][j],matrix[i][k-j-1]);
        }
    }
    //return matrix;
}
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k = mat.size();
        for(int i =0 ; i<4; i++){
            if(mat == target){
                return true;
            }
            transpose(mat,k);
        }
        return false;
    }
};