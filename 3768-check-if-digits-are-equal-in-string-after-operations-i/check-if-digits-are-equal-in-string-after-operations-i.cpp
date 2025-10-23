class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.length();
        

        //should iterate the complete string once and append it into a new temp value 
        //the temp i sused for the  next iterations 
        //number of iterations is equal to the string length equal to 2 
        //once the string length is equal to 2 we check whether the elemnts are same or not 
        
        while(s.length() >2){
            string temp = "";
            for (int i = 0; i < (int)s.length() - 1; i++) {
                int sum = ((s[i] - '0') + (s[i + 1] - '0')) % 10;
                temp += to_string(sum);
            }
            s = temp;
        }

        return s[0] == s[1];
    }
};