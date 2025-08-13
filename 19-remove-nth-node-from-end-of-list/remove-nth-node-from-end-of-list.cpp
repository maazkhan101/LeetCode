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
        int count=0;

        ListNode* temp=head;
        int size=0;

        ListNode* dummy=head;
        while(dummy!=nullptr)
        {
            size++;
            dummy=dummy->next;

        }
        if(n==size)
        {
            return head->next;
        }

        while(temp!=nullptr)
        {
            
            if(count==size-n-1)
            {
                
                temp->next=temp->next->next;
                break;

            }
            count++;
            temp=temp->next;
        }

        return head;
    }
};
