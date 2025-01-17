/* 

   class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root == NULL){
            return false;
        }
        if(root->left == NULL && root->right == NULL){
            return root->val == targetSum;
        }

        bool left = hasPathSum(root->left , targetSum - root->val );
        bool right = hasPathSum(root->right , targetSum - root->val);

        return left | right;

    }
};
*/

/*


  Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
Output: true
Explanation: The root-to-leaf path with the target sum is shown.
*/