class Solution {
public:
    int binary(int num){
        return num;  
    }
    int bits_one(int num){
        int count = 0;
        while(num>0){
            int digit = num%2;      
            if(digit == 1){
                count++;
            }
            num = num/2;             
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i =0 ; i<= n  ;i++){
            int num = binary(i);
            int bit_one = bits_one(num);
            ans.push_back(bit_one);
        }
        return ans;

    }
};