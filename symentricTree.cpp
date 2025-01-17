/* 
   class Solution {
public:
      bool check(TreeNode* L , TreeNode* R){

         if(L == NULL && R == NULL){
            return true;
         }
         if(L == NULL || R == NULL){
            return false;
         }
         if( L->val != R->val){
            return false;
         }

         return check(L->left , R->right) && check(L->right , R->left);
      }
    bool isSymmetric(TreeNode* root) {
        
          bool ans = check( root->left , root->right);
          return ans;
    }
};
*/

/*  


      1
    /  \
   2    2
  / \  / \
 3   4 3  4

 output true

    
     1
    / \ 
   2   2
   \    \ 
    3    3

    output false
*/