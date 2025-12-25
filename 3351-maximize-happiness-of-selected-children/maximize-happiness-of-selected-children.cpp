class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n = happiness.size();
        long long  sum = 0;
        sort(happiness.begin(),happiness.end());
        for(int i = 0 ; i<k ; i++){
            int val = happiness[n-1] - i;
            if(val > 0){
                sum +=  val;
                n--;
                
                
            }

        }
        return sum;
    }
};