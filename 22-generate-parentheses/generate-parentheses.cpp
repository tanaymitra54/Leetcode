class Solution {
public:
    void generateParanthesisHelper(int open_rem, int close_rem, string s, vector<string> &ans){
        if(open_rem == 0 && close_rem == 0 ){
            ans.push_back(s);
            return;
        }

        if(open_rem >0){
            string temp = s + '(';
            generateParanthesisHelper(open_rem -1, close_rem, temp , ans);
        }

        if(open_rem < close_rem){
            string temp = s + ')';
            generateParanthesisHelper(open_rem, close_rem - 1, temp , ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        generateParanthesisHelper(n , n , s, ans);
        return ans;
    }
};