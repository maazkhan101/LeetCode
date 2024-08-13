class Solution {
public:
    vector<vector<int>> ans;

    void levelorder(TreeNode* root) {
        queue<TreeNode*> q;

        if (root == nullptr) {
            return;
        }

        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> temp;

            for (int i = 0; i < size; i++) {
                TreeNode* current = q.front();
                q.pop();
                temp.push_back(current->val);

                if (current->left) {
                    q.push(current->left);
                }
                if (current->right) {
                    q.push(current->right);
                }
            }

            ans.push_back(temp);
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        levelorder(root);
        return ans;
    }
};
