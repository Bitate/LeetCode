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
    vector<int> inorderTraversal(TreeNode* root) {
        // Temporary space
        stack<TreeNode*> st;

        // Iterator for the Tree
        TreeNode* curr = root;

        // Store final result
        vector<int> result;
        
        while(curr || !st.empty())
        {
            if(curr) // if curr != nullptr
            {
                st.push(curr);

                // Left child first
                curr = curr->left;
            }
            else // curr == nullptr
            {
                /**
                 * We process/traverse/visit the parent/root 
                 * node of each subtree secondly.
                 */
                curr = st.top();
                st.pop();
                result.push_back(curr->val);

                // Right child last
                curr = curr->right;
            }
        }
        
        return result;
    }
};