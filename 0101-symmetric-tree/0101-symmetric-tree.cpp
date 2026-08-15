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
        queue<TreeNode*> r,l;
        r.push(root->right);
        l.push(root->left);
        while(!r.empty()){
            TreeNode* a=r.front(); r.pop();
            TreeNode* b=l.front(); l.pop();
            if(!a && !b) continue;
            if(!a || !b) return false;
            if(a->val != b->val) return false;
            l.push(b->right);
            r.push(a->left);
            l.push(b->left);
            r.push(a->right);
        }
        return true;
    }
};