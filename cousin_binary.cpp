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
    int l1, l2;
    TreeNode* p1;
    TreeNode* p2;
    void check(TreeNode* root, int x,int y, int level, TreeNode* parent)
    {
        if(!root)
            return;
        if(root->val == x)
        {
            l1 = level;
            p1 = parent;
        }
        
        if(root->val == y)
        {
            l2 = level;
            p2 = parent;
        }
        
        check(root->left, x,y,level+1,root);
        check(root->right, x,y,level+1,root);   
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        check(root,x,y,0,NULL);
        
        if(p1 != p2 and l1 == l2)
            return true;
        else
            return false;
              
        
    }
}
