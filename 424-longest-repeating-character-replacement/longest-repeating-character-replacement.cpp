class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;//hashmap to count the frequenct of the character being present in the string
        int l =0;
        int res = 0;
        int max_freq = 0;
        for(int r = 0 ; r< s.length() ; r++){
            mp[s[r]]++;

            max_freq = max(max_freq, mp[s[r]]);

            while( (r - l+1) - max_freq  > k){
                mp[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
        }
        
        return res;

    }
};