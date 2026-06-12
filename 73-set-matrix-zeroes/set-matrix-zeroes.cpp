class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstRow = false;
        bool firstCol = false;
        int n = matrix.size();//row size
        int m = matrix[0].size(); // col size

        //checking for first col zero 
        for(int i =0 ; i<n ; i++){
            if(matrix[i][0] == 0){
                firstCol = true;
            }
        }
        //checking for first col zero 
        for(int j =0 ; j<m ; j++){
            if(matrix[0][j] == 0){
                firstRow = true;
            }
        }
        //the markers are set at 0 and 0, so the first ones 


        //making markers to mark the zerosin center
        for(int i = 1 ; i<n; i++){
            for(int j = 1 ; j<m ;j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        //updating with markers 
        for(int i = 1 ; i<n ; i++){
           for(int j = 1 ; j<m ;j++){
                if( matrix[i][0] == 0 || matrix[0][j] == 0 ){
                    matrix[i][j] = 0;
                }
            }
        }

        //updating first row and col 
        if(firstCol){
            for(int i =0 ; i<n ; i++){
                matrix[i][0] = 0;
            }
        }

        if(firstRow){
            for(int j =0 ; j<m ; j++){
                matrix[0][j] = 0;
            }
        }

    }
};