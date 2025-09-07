class Solution {
public:
    void getAllCombi(vector<int>& candidates, int target,int index, vector<vector<int>> &ans, vector<int> &combi){
        if(target<0){
            return;
        }

        if(target == 0){
            ans.push_back(combi);
            return;
        }

        for(int i = index ; i<candidates.size(); i++){
            if(i>index && candidates[i] == candidates[i-1]){
                continue;
            }
            //take case
            combi.push_back(candidates[i]);
            getAllCombi(candidates, target - candidates[i], i +1, ans , combi);
            combi.pop_back();

        }

    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combi;
        sort(candidates.begin(), candidates.end());
        getAllCombi(candidates,target, 0, ans, combi);
        return ans;
    }
};