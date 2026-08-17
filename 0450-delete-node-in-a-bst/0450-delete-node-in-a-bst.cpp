class Solution {
public:

    TreeNode* findLastRight(TreeNode* root) {
        while (root->right != NULL) {
            root = root->right;
        }
        return root;
    }

    TreeNode* helper(TreeNode* root) {

        // No left child
        if (root->left == NULL)
            return root->right;

        // No right child
        if (root->right == NULL)
            return root->left;

        // Two children
        TreeNode* rightChild = root->right;

        TreeNode* lastRight = findLastRight(root->left);

        lastRight->right = rightChild;

        return root->left;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {

        if (root == NULL)
            return NULL;

        // Deleting root itself
        if (root->val == key)
            return helper(root);

        TreeNode* cur = root;

        while (root != NULL) {

            if (root->val > key) {

                // key is in left subtree
                if (root->left != NULL &&
                    root->left->val == key) {

                    root->left = helper(root->left);
                    break;
                }

                root = root->left;
            }

            else {

                // key is in right subtree
                if (root->right != NULL &&
                    root->right->val == key) {

                    root->right = helper(root->right);
                    break;
                }

                root = root->right;
            }
        }

        return cur;
    }
};