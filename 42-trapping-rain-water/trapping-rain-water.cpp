class Solution {
public:
    vector<int> getLeftMax(vector<int> &height, int &n){
        vector<int> left_max(n);// the array to be returned 
        left_max[0] = height[0];//there wont be any left than the leftmost one 

        for(int i = 1; i<n ; i++){//iterate form the 2nd element
            left_max[i] = max(left_max[i-1],height[i]);
        }
        return left_max;
    }

    vector<int> getRightMax(vector<int> &height, int &n){
        vector<int> right_max(n);//the array to be returned
        right_max[n-1] = height[n-1];//there wont be any right than the right most element

        for(int i = n - 2; i>=0 ; i--){
            right_max[i] = max(right_max[i+1],height[i]);
        }
        return right_max;
    }


    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left_max = getLeftMax(height, n);
        vector<int> right_max = getRightMax(height, n);

        int sum = 0;
        for(int i =0 ; i<n ; i++){
            int width = 1;
            int h = min(left_max[i],right_max[i]) - height[i];
            sum+= (width * h);
        }

        return sum;
    }
};