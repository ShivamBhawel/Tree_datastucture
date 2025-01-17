/*

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;

        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};


*/

/*

Input: root = [3,9,20,null,null,15,7]
Output: 3

     3
    / \
   9  20 
      / \
     15  7       

Example 2:

Input: root = [1,null,2]
Output: 2




*/