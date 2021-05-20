/*
Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.
Two binary trees are considered leaf-similar if their leaf value sequence is the same.
Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar.
*/

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

        vector<int> first; // the first tree
        vector<int> second; // the second tree
        dfs(root1, first);
        dfs(root2, second);

        if (first.size() != second.size()) // if the number of elements is different the trees don't have the same leaves
            return false;

        for (int i = 0; i < first.size(); i++) { // if the leaves are different from one another
            if (first[i] != second[i])
                return false;
        }

        return true;
    }

    void dfs(TreeNode* root, vector<int>& lastRow) { // depth-first search function

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
