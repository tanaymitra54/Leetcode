class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        vector<int> arr;
        int max = 0;
        for(char ch : s){
            if(ch == '('){
                count++;
                if(count > max){
                    max = count;
                }

            }
            else if(ch == ')'){
                count--;
                
            }
        }
        //int max = *max_element(arr.begin(),arr.end());
        return max;
    }
};