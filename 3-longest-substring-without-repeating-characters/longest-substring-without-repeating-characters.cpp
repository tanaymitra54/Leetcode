class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int n = s.length();
        int l =0;
        set<int> st;

        for(int r =0 ; r<n ; r++){
            while(st.find(s[r]) != st.end()){//the invalid case where the right pointer points to an element which  is in the string 
                st.erase(s[l]);//rmeove the char at leftmost
                l++;//increment the left pointer until its valid 
            }

            int w = (r-l)+1;//size of the window
            longest = max(longest, w);//update  the longest and keep on comparing
            st.insert(s[r]);
        }
        return longest;
    }
};