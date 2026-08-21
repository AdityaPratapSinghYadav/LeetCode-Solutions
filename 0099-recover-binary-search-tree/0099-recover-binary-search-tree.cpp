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
    void inorder(TreeNode* root, vector<TreeNode*>& v){
        if(root == NULL) return ;
        inorder(root->left, v);
        v.push_back(root);
        inorder(root->right, v);
    }


    void recoverTree(TreeNode* root) {
        vector<TreeNode*> v;
        inorder(root, v);
        TreeNode* first = NULL;
        TreeNode* second = NULL;
        for(int i=1; i<v.size(); i++){
            if(v[i]->val < v[i-1]->val){
                if(first == NULL){
                    first = v[i-1];
                }
                second = v[i];
            }
        }
        swap(first->val, second->val);

    }
};