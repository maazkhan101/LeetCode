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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* temp = head;
        vector<int> v1;
        vector<int> v2;
        stack<int> s;

        while (temp != NULL) {
            v1.push_back(temp->val);
            temp = temp->next;
        }

        int leftindex = left - 1;
        int rightindex = right - 1;

        for (int i = leftindex; i <= rightindex; ++i) {
            s.push(v1[i]);
        }

        for (int i = 0; i < leftindex; ++i) {
            v2.push_back(v1[i]);
        }

        while (!s.empty()) {
            v2.push_back(s.top());
            s.pop();
        }

        for (int i = rightindex + 1; i < v1.size(); ++i) {
            v2.push_back(v1[i]);
        }

        ListNode* newhead = new ListNode();
        ListNode* currenthead = newhead;

        for (int i = 0; i < v2.size(); ++i) {
            currenthead->next = new ListNode(v2[i]);
            currenthead = currenthead->next;
        }

        temp = newhead->next;
        delete newhead; // Free the dummy node
        return temp;
    }
};
