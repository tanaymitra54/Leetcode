class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalsum =0;
        for(int i =0 ; i<nums.size() ; i++){
            vector<int> divisors = divisor(nums[i]);
            if(divisors.size() == 4){
                for(int d : divisors){
                    totalsum += d;
                }
            }
            
        }
        return totalsum;
        
    }

    vector<int> divisor(int n){
        vector<int> result;
        
        for(int i = 1; i*i<= n ; i++){
            if(n % i == 0){
                result.push_back(i);
                if(i != n/i){
                    result.push_back(n/i);
                }
            }
            if(result.size() > 4){
                return result;
            }
        }
        return result;
    }
};