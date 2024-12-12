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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> result; 
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> v;
            for (int i = 0; i < size; i++) {

                TreeNode* t = q.front();
                q.pop();

                v.push_back(t->val);

                if (i == size-1) {
                    result.push_back(v);
                }

                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);

            }
            v.clear();
        }

        for (int i = 0; i < result.size(); i++) {
            if (i%2 == 1) {
                reverse(result[i].begin(), result[i].end());
            }
        }
        return result;
        
    }
};
