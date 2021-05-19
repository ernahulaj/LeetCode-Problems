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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> first;
        vector<int> second;
        dfs(root1, first);
        dfs(root2, second);

        if (first.size() != second.size())
            return false;

        for (int i = 0; i < first.size(); i++) {
            if (first[i] != second[i])
                return false;
        }

        return true;
    }

    void dfs(TreeNode* root, vector<int>& lastRow) {

        if (root == NULL)
            return;
        else {
            if (root->left == NULL && root->right == NULL)
                lastRow.push_back(root->val);

            dfs(root->left, lastRow);
            dfs(root->right, lastRow);
        }

    }
};
