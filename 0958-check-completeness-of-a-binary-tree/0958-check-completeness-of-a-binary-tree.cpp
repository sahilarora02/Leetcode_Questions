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
class Solution {
public:
    bool CBT(TreeNode* root , int i ,int n){
        if(root==NULL){
            return true;
        }
        if(i>=n){
            return false;
        }
        return CBT(root->left , 2*i+1 , n)&&CBT(root->right , 2*i+2 , n);
    }
int countNodes(TreeNode* root ){
    if(root==NULL){
        return 0;
    }
    return 1 + countNodes(root->left)+countNodes(root->right);
}
    bool isCompleteTree(TreeNode* root) {
       int index = 0;
       int totalCount = countNodes(root);
        return CBT(root , index , totalCount);
    }
};