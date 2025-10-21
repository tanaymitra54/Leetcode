#include <vector>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }

private:
    // helper function: count subarrays with sum <= goal
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) return 0;  // no valid subarray if goal < 0

        int l = 0, sum = 0, count = 0;

        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];

            // shrink window until sum <= goal
            while (sum > goal) {
                sum -= nums[l];
                l++;
            }

            // all subarrays ending at r and starting from l..r are valid
            count += (r - l + 1);
        }

        return count;
    }
};