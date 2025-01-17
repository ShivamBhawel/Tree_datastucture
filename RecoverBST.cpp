/*
class Solution {
public:
    TreeNode*prev,*first,*second;
    void inorder(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        if(!first && root->val<prev->val)
        {
            first=prev;
        }
        if(first && root->val<prev->val)
        {
            second=root;
        }
        prev=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
     prev= new TreeNode(INT_MIN);
     inorder(root);
     swap(first->val,second->val);
    }
};
*/

/* 

Input: root = [1,3,null,null,2]
Output: [3,1,null,null,2]
Explanation: 3 cannot be a left child of 1 because 3 > 1. Swapping 1 and 3 makes the BST valid.


  1     3
 /     /
3     1
 \     \ 
  2     2
*/