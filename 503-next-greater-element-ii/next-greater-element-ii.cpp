class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result;
        vector<int> nums2 = nums;

        int n = nums.size();

        for(int i = 0; i< n; i++){
            nums2.push_back(nums[i]);
        }

        for(int i =0 ; i<n; i++){
            bool found = false;
            for(int j = i+1; j< i + n ; j++){
                if(nums2[j]>nums[i]){
                    result.push_back(nums2[j]);
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