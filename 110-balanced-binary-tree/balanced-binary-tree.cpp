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
    int height(TreeNode* root){
        if(root ==NULL){
            return 0;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        return 1 + max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int lh = height(root->left);
        int rh = height(root->right);

        if(abs(lh - rh) > 1){
            return false;
        }

        //abive this portion we are onlychekcing whether the root is balanced we also need to check the entire left subtree and th eright subtree
        
        return isBalanced(root->left) && isBalanced(root->right);
    
    }
};