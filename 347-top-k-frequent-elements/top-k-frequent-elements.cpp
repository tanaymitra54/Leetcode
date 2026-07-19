class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num : nums){
            freq[num]++;
        }
        vector<int> result;
        vector<pair<int,int>> listt;
        for(auto &[num,count] : freq){
            listt.push_back({count,num});
        }

        sort(listt.rbegin() , listt.rend());//descending order

        for(int i = 0; i < k ; i++){
            result.push_back(listt[i].second);
        }
        return result;
    }
};