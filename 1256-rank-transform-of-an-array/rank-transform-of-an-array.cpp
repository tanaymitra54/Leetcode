class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return arr;
        vector<int> copy = arr;//created a copy to work on it 
        sort(copy.begin(),copy.end());//the copy must be sorted
        unordered_map<int,int> mp;

        int rank = 1;
        mp[copy[0]] = rank;

        for(int i = 1 ; i<copy.size() ; i++){
            if(copy[i] != copy[i-1]){//if the next element is not same to that of the previous element 
                rank++;
                mp[copy[i]] = rank;
            }
        }

        for(int i =0 ; i<arr.size() ; i++){
            arr[i] = mp[arr[i]]; //map the maps elemnts to that of the original array 
        }
        return arr;
    }
};