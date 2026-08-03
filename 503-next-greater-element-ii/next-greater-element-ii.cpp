class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for(int i = 0 ; i<n; i++){
            bool found = false;
            for(int j = 0 ; j<n ; j++){
                int idx = (i+j)%n;
                if(nums[idx] > nums[i]){
                    result.push_back(nums[idx]);
                    found = true;
                    break;
                }
            }
            if(!found){
                result.push_back(-1);
            }
        }
        return result;
    }
};