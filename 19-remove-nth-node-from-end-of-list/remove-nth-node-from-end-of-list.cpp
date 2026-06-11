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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0,head); //creates a dummy node at the beginning of the head node
        ListNode* slow = dummy; //left node points to the dummy 
        ListNode* fast = head; //right points to the heda initially 

        //position the head porperly now 
        for(int i =0 ; i<n; i++){
            fast = fast->next;
        }

        //keep moving until fast reches null
        while(fast != nullptr){
            slow = slow->next;
            fast = fast->next;
        }

        //delete the node as now the slow would point to the correct node 
        slow->next = slow->next->next;
        return dummy->next;


    }
};