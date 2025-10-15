class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> deq;
        vector<int> result;

        for(int i =0; i<n ; i++){
            //,aking space for nums[i]

            while(!deq.empty() && deq.front() <= i-k){
                deq.pop_front();
            }

            //step- 2
            while(!deq.empty() && nums[i] > nums[deq.back()]){
                deq.pop_back();
            }

            //step-3
            deq.push_back(i);

            //step-4
            if(i >= k-1){
                result.push_back(nums[deq.front()]);
            }

           
        }
        return result;
    }
};

//here i am alwasys mainting a order such that the front of the deque always has the maximum value

//Step-by-Step Explanation:
// Initialization:

// n stores the size of the input array nums.
// deq is a deque that stores indices of elements, maintaining a decreasing order of values (so the front is always the max for the current window).
// result will store the maximum values for each sliding window.
// Loop through each index i from 0 to n-1:

// For each element nums[i], you perform the following steps:
// Step 1: Remove indices outside the current window:

// while(!deq.empty() && deq.front() <= i - k) deq.pop_front();
// This removes indices from the front of the deque that are no longer in the current sliding window. The window ends at i and starts at i - k + 1, so any index <= i - k is out of bounds and should be removed. This ensures the deque only contains indices relevant to the current window.
// Step 2: Maintain decreasing order in the deque:

// while(!deq.empty() && nums[i] > nums[deq.back()]) deq.pop_back();
// This removes indices from the back of the deque if their corresponding elements are smaller than the current element nums[i]. By doing this, you ensure the deque remains in strictly decreasing order (from front to back). This step is crucial because any element smaller than nums[i] cannot be the maximum in any future window that includes nums[i].
// Step 3: Push the current index to the deque:

// deq.push_back(i);
// After ensuring all smaller elements are removed, you add the current index i to the back of the deque. This index now becomes part of the potential candidates for future windows.
// Step 4: Record the maximum for the current window:

// if(i >= k - 1) result.push_back(nums[deq.front()]);
// Once the loop reaches i >= k - 1, the first complete window is formed (from index i - k + 1 to i). The front of the deque always holds the index of the maximum value in the current window, so you add that value to result.


