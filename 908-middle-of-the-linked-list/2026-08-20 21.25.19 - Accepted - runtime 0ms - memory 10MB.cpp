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
    ListNode* middleNode(ListNode* head) {
        // if(head==NULL){
        //     return head;
        // }
        // ListNode* temp=head;
        // int count=0;
        // while(temp!=NULL){
        //     temp=temp->next;
        //     count++;
        // }
        // // int i=1;
        // int mid=(count/2)+1;
        // int i=1;
        // ListNode* res=head;
        // while(i<mid){
        //     res=res->next;
        //     i++;


        // }
        // return res;
        if(head==NULL){
            return head;
        }
        ListNode* slow=head;
        ListNode* fast =head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};