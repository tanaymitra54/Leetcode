/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* reverseList(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        ListNode* curr = head;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
         // Step 1: Find middle (start of second half)
        ListNode* secondHalf = findMiddle(head);

        // Step 2: Reverse the first half
        // First, find the node just before secondHalf to split the list
        ListNode* firstHalfTail = head;
        ListNode* curr = head;
        while (curr->next != secondHalf) {
            curr = curr->next;
        }
        firstHalfTail->next; // no-op, just clarity
        curr->next = nullptr; // split: curr is the actual tail of first half

        ListNode* firstHalfReversed = reverseList(head);

        // Step 3: Walk both halves, compute max twin sum
        int maxSum = 0;
        ListNode* p1 = firstHalfReversed;
        ListNode* p2 = secondHalf;

        while (p1 && p2) {
            maxSum = max(maxSum, p1->val + p2->val);
            p1 = p1->next;
            p2 = p2->next;
        }

        return maxSum;
    }
};