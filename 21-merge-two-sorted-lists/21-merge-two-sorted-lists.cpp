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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp=new ListNode(0);
        ListNode* head=temp;
        while(list1 && list2){
            if(list1->val<=list2->val){
                ListNode* node=new ListNode(list1->val);
                list1=list1->next;
                head->next=node;
                head=node;
            }
            else{
                ListNode* node=new ListNode(list2->val);
                list2=list2->next;
                head->next=node;
                head=node;
            }
        }
        while(list1){
            ListNode* node=new ListNode(list1->val);
            list1=list1->next;
            head->next=node;
            head=node;
        }
        while(list2){
            ListNode* node=new ListNode(list2->val);
            list2=list2->next;
            head->next=node;
            head=node;
        } 
        return temp->next;
    }
};