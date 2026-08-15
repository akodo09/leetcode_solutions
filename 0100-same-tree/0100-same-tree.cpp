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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qp,pq;
        pq.push(p);
        qp.push(q);
        while(!pq.empty()){
            TreeNode* a=pq.front(); pq.pop();
            TreeNode* b=qp.front(); qp.pop();
            if(!a && !b) continue;
            if(!a || !b) return false;
            if(a->val!=b->val) return false;
            qp.push(a->left);
            qp.push(a->right);
            pq.push(b->left);
            pq.push(b->right);
        }
        return true;
    }
};