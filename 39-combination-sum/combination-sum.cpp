class Solution {
public:
    void getAllCombinations(vector<int>& candidates, int i, int target,
                            vector<vector<int>> &ans, vector<int> &combi) {
        // base case
        if (target == 0) {
            ans.push_back(combi);
            return;
        }
        if (i == candidates.size() || target < 0) {
            return;
        }

        // include current number
        combi.push_back(candidates[i]);
        getAllCombinations(candidates, i, target - candidates[i], ans, combi);
        combi.pop_back();

        // exclude current number
        getAllCombinations(candidates, i + 1, target, ans, combi);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combi;
        getAllCombinations(candidates, 0, target, ans, combi);
        return ans;
    }
};