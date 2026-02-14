class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i =0 ; i<nums.size() ; i++){
            string binary = decimalToBinary(i);
            int count = 0;
            for(char ch : binary){
                if(ch == '1'){
                    count++;
                }
            }
            if(count == k){
                sum+=nums[i];
            }
        }
        return sum;
    }

    string decimalToBinary(int nums){
        string binary = "";
        while(nums>0){
            binary = to_string(nums % 2) + binary;
            nums = nums/2;
        }
        return binary;
    }
};