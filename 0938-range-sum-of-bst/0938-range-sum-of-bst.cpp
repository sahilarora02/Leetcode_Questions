class Solution {
public:
    void findSum(TreeNode* root , int low , int high , int &sum){
            if(root==NULL){
                return ;
            }
        if(root->val>=low && root->val<=high){
            sum+=root->val;
        }
        findSum(root->left , low , high , sum);
        findSum(root->right , low , high , sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        findSum(root ,low , high , sum);
        return sum;
    }
};