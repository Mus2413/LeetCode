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
    ListNode* rotateRight(ListNode* head, int k) {
        int size=0;
        if(head==NULL || k==0)
            return head;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        k=k%size;
        if(k==0)
            return head;
        int n=size-k;
        temp=head;
        ListNode* prev=NULL;
        while(n>0)
        {
            n--;
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        prev=temp;
        while(temp!=NULL && temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp)
        temp->next=head;
        
        return prev;
        
        
    }
};