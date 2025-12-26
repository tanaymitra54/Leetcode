class Solution {
public:
    int maxDistinct(string s) {
        sort(s.begin(),s.end());
        vector<char> unique;
        for(int i =0 ; i<s.size();i++){
            if(s[i] != s[i + 1]){
                unique.push_back(s[i]);
            }
        }
        return unique.size();
    }
};