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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return builder(preorder, i, INT_MAX); 
        
    }
    TreeNode* builder(vector<int>& preorder, int& i, int bound){
        if(i == preorder.size() || preorder[i] > bound){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = builder(preorder, i, root->val);
        root->right = builder(preorder, i ,bound);

        return root;
    }


};