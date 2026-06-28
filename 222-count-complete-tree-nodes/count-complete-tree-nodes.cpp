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
    void inorder(TreeNode* root, int &count){
        if(root == NULL){
            return;
        }
        //LNR
        inorder(root->left, count);

        count++;//here we dont only count hte leaf nodes we also count the inner nodes.

        inorder(root->right, count);

    }
    int countNodes(TreeNode* root) {
        int count = 0;
        inorder(root, count);
        return count;
    }
};