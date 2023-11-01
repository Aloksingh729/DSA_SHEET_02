class Solution {
public:

   unordered_map<int ,int>mp;

   void inorder(TreeNode* root){
       if(!root){
return;
       } 

     inorder(root->left);
     mp[root->val]++;
     inorder(root->right);


   }



    vector<int> findMode(TreeNode* root) {
        inorder(root);

        vector<int> result;
        int maxFreq=0;
      

        for(auto &it:mp){
            if(it.second>maxFreq){
                maxFreq=it.second;
                result={};
                result.push_back(it.first);
            }
            else if(it.second==maxFreq){
                result.push_back(it.first);
        }
        }
       return result;
    }
};