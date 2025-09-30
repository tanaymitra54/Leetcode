class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;
        vector<int> finall;
        for(int i =0 ; i<nums.size(); i++){
            if(nums[i] > 0){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        for(int i =0 ; i<n/2 ; i++){
            finall.push_back(arr1[i]);
            finall.push_back(arr2[i]);
        }
        return finall;
    }
};