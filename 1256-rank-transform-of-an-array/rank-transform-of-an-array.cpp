class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return arr;
        vector<int> copy = arr;
        sort(copy.begin(),copy.end());
        unordered_map<int,int> mp;

        int rank = 1;
        mp[copy[0]] = rank;

        for(int i =1 ; i<copy.size() ; i++){
            if(copy[i] != copy[i-1]){
                rank++;
                mp[copy[i]] = rank;
            }
        }

        for(int i =0 ; i<arr.size() ; i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};