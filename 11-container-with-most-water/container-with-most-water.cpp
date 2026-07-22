class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
         int l = 0;
        int r = n-1;
        long long  max_area = INT_MIN;
        while(l<r){
            long long area = min(height[l],height[r]) * (r-l);
            max_area = max(max_area,area);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return max_area;
    }
};