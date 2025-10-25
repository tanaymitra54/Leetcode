class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int i =0;
        while(n>0){
            int week_sum = i+1;
            for(int j =0; j<7 && n>0; j++){
                total += j + week_sum;
                n--;
            }
            i++;
        }
        return total;
        
    }
};