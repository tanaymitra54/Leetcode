class Solution {
public:
    int minVal(int num1, int num2){
        return (num2 < num1) ? num2 : num1;
    }

    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res = asteroids;
        bool collision = true;

        while(collision){
            collision = false;
            if(res.size() < 2) break; // avoid i+1 out-of-bounds

            for(int i = 0; i < res.size() - 1; i++){
                if(res[i] > 0 && res[i+1] < 0){
                    if(abs(res[i]) > abs(res[i+1])) res[i+1] = 0;
                    else if(abs(res[i]) < abs(res[i+1])) res[i] = 0;
                    else { res[i] = 0; res[i+1] = 0; }
                    collision = true;
                }
            }

            vector<int> finalRes;
            for(int x : res) if(x != 0) finalRes.push_back(x);
            res = finalRes;
        }

        return res;
    }
};