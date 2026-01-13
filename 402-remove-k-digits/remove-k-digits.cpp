class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<int> digits;
        string ans = "";

        for(char ch : num){
            int digit = ch - '0';
            digits.push_back(digit);
        }

        int count = 0;

        for(int i = 0 ; i<digits.size() && count<k ;){
            if(i > 0 && digits[i-1] > digits[i]){
                digits.erase(digits.begin() + i - 1);
                count++;
                if(i > 0){
                    i--;
                }
            }
            else{
                i++;
            }
        }
        while(count < k){
            digits.pop_back();
            count++;
        }
        for(int d : digits){
            if(!(ans.empty() && d == 0))
                ans += (d + '0');
        }

        return ans.empty() ? "0" : ans;
        
    }
};