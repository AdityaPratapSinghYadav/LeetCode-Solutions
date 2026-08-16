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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)
            return new TreeNode(val);

        TreeNode* cur = NULL;
        TreeNode* ans = root;
        while(root != NULL ){
            if(val > root->val){
                cur = root;
                root = root->right;
            }

            else {
                cur = root;
                root = root->left;
            }
                
        }
        if(cur->val > val){
            cur->left = new TreeNode(val);
        } else cur->right = new TreeNode(val);
        return ans;
    }
};