class Solution {
public:
    bool judgeCircle(string moves) {
       int x = 0, y= 0;
       for(char ch : moves){
            if(ch == 'U') y++;
            if(ch == 'D') y--;
            if(ch == 'L') x--;
            if(ch == 'R') x++;
       }
       if(x == 0 && y==0){
        return true;
       }
       else{
        return false;
       }
    }
};