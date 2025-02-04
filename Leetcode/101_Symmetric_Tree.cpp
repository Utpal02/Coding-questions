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
    bool isSymmetric(TreeNode* root) {
            if(root == NULL)
            {
                return true;
            }
        return Test(root->left, root->right);
    }
    bool Test(TreeNode* p, TreeNode* q)
    {
        if(p == NULL && q == NULL)
            return true;
        else if(p == NULL || q == NULL)
            return false;
        else if(p->val != q->val)
            return false;
        return Test(p->left, q->right) && Test(p->right, q->left);
    }
};
