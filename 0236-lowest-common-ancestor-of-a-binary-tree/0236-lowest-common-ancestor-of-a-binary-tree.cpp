/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
       
        if(root->val == p->val || root->val == q->val){
            return root;
        }
        
        TreeNode* Left = lowestCommonAncestor(root->left , p , q);
        TreeNode* Right = lowestCommonAncestor(root->right , p , q);
        if(Left==NULL&&Right==NULL){
            return NULL;
        }else if(Left!=NULL&&Right!=NULL){
            return root;
        }else{
            if(Left==NULL){
                return Right;
            }else{
                return Left;
            }
        }

    }
};