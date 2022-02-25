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
        if(head==NULL || n==0) return head;
        int len=0;
        ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        } 
        if(len==n){
            ListNode* next=head->next;
            head->next=NULL;
            head=next;
        }
        else{
            int count=0;
            temp=head;
            while (temp!=NULL)
            {
                count++;
                if (len-n== count){
                    temp->next = temp->next->next;
                    break;
                }
                temp = temp->next;
            }
        }
        return head;
    }
};