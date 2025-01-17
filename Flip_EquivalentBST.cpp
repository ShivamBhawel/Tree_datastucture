/*
 class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {

         if(root1 == NULL && root2 == NULL){
            return true;
         }
         if(root1 == NULL || root2 == NULL){
            return false;
         }
         if(root1->val == root2->val){

         bool withoutflip = flipEquiv(root1->left , root2->left) && flipEquiv(root1->right , root2->right);
         bool withflip = flipEquiv(root1->left , root2->right) && flipEquiv(root1->right , root2->left);
                

            return withflip || withoutflip;

         } else {
            return false;
         }
    }
};
*/



/*
   Given the roots of two binary trees root1 and root2, return true if the two trees are flip equivalent or false otherwise.

     1                     1 
    / \                  /   \ 
   2   3                3     2
  / \ /                  \   /  \ 
 4  5 6                   6 4    5
   / \                          / \
  7   8                        8   7
*/