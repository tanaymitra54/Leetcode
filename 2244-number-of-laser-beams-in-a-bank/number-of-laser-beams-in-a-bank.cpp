class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        vector<int> count_rows;
        int sum =0;
        int prev =0;
        
        for(int i =0 ; i<n ; i++){
            int count = 0;
            for(int j =0 ; j<bank[i].size(); j++){
                if(bank[i][j]== '1'){
                    count++;
                }
            }
            if(count!=0){
                sum += count * prev;
                prev = count;
            }
            
        }
        
        return sum;
    }
};