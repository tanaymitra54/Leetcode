class Solution {
public:
    int mirrorDistance(int n) {
        string num = to_string(n);
        string rev = num;
        
        reverse(rev.begin(),rev.end());
        
        int rev_num = stoi(rev);
        int diff = abs(n-rev_num);
        return diff;


    }
};