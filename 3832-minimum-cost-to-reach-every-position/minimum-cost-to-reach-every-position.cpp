class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> result;

        result.push_back(cost[0]);//entering the first element

        for(int i = 1 ; i<cost.size(); i++){//iterating though the array
            
                if(cost[i]>result[i-1]){
                    result.push_back(result[i-1]);
                }
                else{
                    result.push_back(cost[i]);
                }
            
        }
        return result;
    }
};