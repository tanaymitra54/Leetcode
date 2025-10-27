class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        vector<int> count_rows;
        
        for(int i =0 ; i<n ; i++){
            int count = 0;
            for(int j =0 ; j<bank[i].size(); j++){
                if(bank[i][j]== '1'){
                    count++;
                }
            }
            if(count!=0){
                count_rows.push_back(count);
            }
            
        }
        if (count_rows.size() < 2) return 0;

        int sum =0;
        for(int i =0 ; i<count_rows.size()-1; i++){
            sum += count_rows[i] * count_rows[i+1];
        }
        return sum;
    }
};