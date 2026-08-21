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

        // ListNode dummy(0);
        // dummy.next=head;
        // ListNode* fast= &dummy;
        // ListNode* slow=&dummy;
        // for(int i=0;i<n;i++){
        //     fast=fast->next;
        // }
        // while(fast->next!=NULL){
        //     fast=fast->next;
        //     slow=slow->next;
        // }
        // ListNode* remove=slow->next;
        // slow->next=slow->next->next;
        // delete remove;
        // return dummy.next;
        ListNode* slow=head;
        ListNode* fast = head;
        for(int i=0;i<n;i++) fast=fast->next;
        if(fast==NULL) return head->next;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;

        }
        ListNode* delnode=slow->next;
        slow->next=slow->next->next;
        // free(delnode);
        return head;

    }
};