class Solution {
public:
    string processStr(string s) {
        string res = "";
        int n = s.length();
        for(int i =0 ; i<n ; i++){
            if( isalnum(s[i])) res += s[i];
            else if(s[i] == '#'){
                if(!res.empty()) res += res; //repeat the last character from the back that already presnt and append it in the result
            } 
            else if(s[i] == '%') reverse (res.begin(),res.end()); //reverse the character 
            else if(s[i] == '*'){
                if(!res.empty())  res.pop_back(); //remove the last character form the back 
            } 
        }
        return res;
        
    }
};