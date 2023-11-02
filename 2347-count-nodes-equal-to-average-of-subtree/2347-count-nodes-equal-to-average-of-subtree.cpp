class Solution {
public:
    int result;
    
    pair<int, int> solve(TreeNode* root) {
        if(!root)
            return {0, 0};
        
        auto p1 = solve(root->left);
        auto p2 = solve(root->right);
        
        int SUM   = p1.first + p2.first + root->val;
        int COUNT = p1.second + p2.second + 1;
        
        int avg = SUM/COUNT;
        
        if(avg == root->val) {
            result++;
        }
        
        return {SUM, COUNT};
    }
    
    int averageOfSubtree(TreeNode* root) {
        result = 0;
        
        solve(root);
        
        return result;
    }
};