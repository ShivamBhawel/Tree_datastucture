/*
  +++++++++++++++++++++++++++++++ Essy and important ++++++++++++++++++++++++++++++++
    
  class Solution {//@CodeVed
public://@CodeVed
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*>q;
        priority_queue<long long>pq;
        q.push(root);
      
        while(!q.empty()){
            long long sum=0;
            int s=q.size();
            while(s--){
                TreeNode*toot=q.front();
                q.pop();
                 sum+=(toot->val);
                 if(toot->left){
                     q.push(toot->left);
                 }//@CodeVed
                 if(toot->right){
                     q.push(toot->right);
                 }//@CodeVed
            }//@CodeVed
            pq.push(sum);
        }//@CodeVed
         if(k > pq.size()){
            return -1;
        }//@CodeVed
        
        while(--k){
            pq.pop();
        }//@CodeVed
      return pq.top();  
        }
   
*/


/*  
           5
          / \
         8   9
        / \ / \ 
       2  1 3  7
     /  \  
    4    6 
Input: root = [5,8,9,2,1,3,7,4,6], k = 2
Output: 13
Explanation: The level sums are the following:
- Level 1: 5.
- Level 2: 8 + 9 = 17.
- Level 3: 2 + 1 + 3 + 7 = 13.
- Level 4: 4 + 6 = 10.
The 2nd largest level sum is 13.
*/