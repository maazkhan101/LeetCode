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
    ListNode* oddEvenList(ListNode* head) {
        

        ListNode* temp=head;

        vector<int>v1;
        vector<int>v2;
        int i=1;
        while(temp!=NULL)
        {
            if(i%2!=0)
            {
                v1.push_back(temp->val);
            }
            else if(i%2==0)
            {
                v2.push_back(temp->val);
            }
            temp=temp->next;
            i++;
        }

        ListNode* newhead=new ListNode();
        ListNode* currenthead=newhead;

        for(int i=0;i<v1.size();i++)
        {
            currenthead->next=new ListNode(v1[i]);
            currenthead=currenthead->next;
        }

        for(int i=0;i<v2.size();i++)
        {
            currenthead->next=new ListNode(v2[i]);
            currenthead=currenthead->next;
        }
        return newhead->next;
    }
};