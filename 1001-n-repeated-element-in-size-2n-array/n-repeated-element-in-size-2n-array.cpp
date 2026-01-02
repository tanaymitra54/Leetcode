class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i =0 ; i< nums.size()-1 ; i++){
            if(nums[i] == nums[i+1]){
                count++;
            }
            if(count >= 1){
                return nums[i];
            }
        }
        return nums.size();
    }
};