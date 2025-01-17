/*

  Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<vector>
#include<iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

};

class Solution {
public:

    TreeNode* create(int l , int r, vector<int>& nums){
        if(l == r) return (new TreeNode(nums[l]));
        if(l>r) return NULL;
        int mid = l+(r-l)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = create(l,mid-1,nums);
        root->right = create(mid+1 , r,nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int l = 0;
        int r = nums.size()-1;
        return create(l,r,nums);
    }
};
int main(){

   vector<int>nums = {-10 , -3 , 0 , 5,9};

   Solution obj;

  cout<< obj.sortedArrayToBST(nums);
       
}





/*
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]


      0
    /   \
  -3    9
  /    /
 10   5

*/