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

        ListNode* temp=head;
        int size=0;

        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        int check=size-n;
        int i=0;

        ListNode* temp2=head;
        if(n==size)
        {
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }
        while(temp2!=NULL)
        {
            if(i==check-1)
            {
                ListNode* del=temp2->next;
                temp2->next=temp2->next->next;
                delete del; 
            }
            i++;
            temp2=temp2->next;
        }
        return head;
        
    }
};