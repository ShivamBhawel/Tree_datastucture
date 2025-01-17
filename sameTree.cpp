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

/* 
class Solution {
public:
      
    bool isSameTree(TreeNode* p, TreeNode* q) {
        

         if (p == NULL && q == NULL) {
            return true;
           }
        
        // If one of them is NULL and the other is not, they are not the same
        if (p == NULL || q == NULL) {
            return false;
        }
        
        // Compare current node values and recursively check left and right subtrees
        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

*/