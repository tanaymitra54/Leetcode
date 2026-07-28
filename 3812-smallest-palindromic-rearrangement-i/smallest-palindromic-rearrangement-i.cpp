class Solution {
public:
    string smallestPalindrome(string s) {
        //1st we count the freq of characters
        map<char,int> mp; //auto sort here 
        for(char ch: s){
            mp[ch]++;
        }

        string half = "";
        char mid = '\0'; //to check and mark the middle character
        for(auto& [ch, freq] : mp){
            if(freq%2 == 1) mid = ch;//if odd freq then it marks the middle character
            half.append(freq/2,ch);
        }
        string rev = half; //reverse the first half
        reverse(rev.begin(),rev.end());

        string result = "";
        result += half;
        if(mid != '\0') result += mid;
        result+= rev;
        return result;
    }
};