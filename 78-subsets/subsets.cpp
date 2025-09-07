class Solution {
public:
    void getAllSubsets(vector<int> &nums, int index,vector<vector<int>> &ans,vector<int> &combi){
        if(index >= nums.size()){
            ans.push_back(combi);
            return;
        }

        //take case
        combi.push_back(nums[index]);
        getAllSubsets(nums,index+1,ans,combi);

        //not take
        combi.pop_back();
        getAllSubsets(nums,index+1,ans,combi);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> combi;
        getAllSubsets(nums, 0 , ans,combi);
        return ans;
    }
};