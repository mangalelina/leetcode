/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result; 

        queue<TreeNode*> q;
        q.push(root); 

        while (!q.empty()) {
            int size = q.size();
            vector<int> v;
            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();

                v.push_back(temp->val);
                if (i == size-1) {
                    result.push_back(v);
                }
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            v.clear();
        }
        
        return result;
        
    }
};
