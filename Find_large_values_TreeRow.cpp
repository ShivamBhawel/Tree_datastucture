/*

 class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        
        vector<int>ans;
        if(!root) return ans;
        queue<TreeNode*>q;

        q.push(root);
        while(!q.empty()){

            int n = q.size();
            int M = INT_MIN;

            for(int i=0;i<n;i++){

                TreeNode* temp = q.front();
                q.pop();
                M = max(M, temp->val);

                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }

            ans.push_back(M);
        }
        return ans;
    }
};
*/

/*
      1
    /  \
   3     2
  / \     \
 5   3     9     


Input: root = [1,3,2,5,3,null,9]
Output: [1,3,9]
Example 2:

Input: root = [1,2,3]
Output: [1,3]
 

*/