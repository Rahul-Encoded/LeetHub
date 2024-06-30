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
    int minVal(TreeNode* root) {
        TreeNode* temp = root;
        while (temp->left != NULL) {
            temp = temp->left;
        }
        return temp->val;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL) return root;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } else {
            // Node to be deleted is a leaf Node
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }
            // Node to be deleted has 1 child
            // has right child
            else if (root->left == NULL && root->right != NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            // has left child
            else if (root->left != NULL && root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            // Node to be deleted has 2 children
            else if (root->left != NULL && root->right != NULL) {
                int mini = minVal(root->right);
                root->val = mini;
                root->right = deleteNode(root->right, mini);
            }
        }
        return root;
    }
};
