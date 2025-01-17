/* 
 class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
       if(!root) return {};

        vector<vector<int>>result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){

            int count = q.size();
            vector<int>v;
            for(int i=0;i<count;i++){

                TreeNode* node = q.front(); 
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                v.push_back(node->val);
            }
            result.push_back(v);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
*/


/*

       3
      / \
    9    20
         / \
        15  7 

Input: root = [3,9,20,null,null,15,7]
Output: [[15,7],[9,20],[3]]
*/