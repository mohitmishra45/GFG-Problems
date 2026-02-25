/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void leftBoundary(Node *root,vector<int>&ans)
    {
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) return;
        ans.push_back(root->data);
        if(root->left!=NULL) leftBoundary(root->left,ans);
        else leftBoundary(root->right,ans);
    }
    
    void leafBoundary(Node *root,vector<int>&ans)
    {
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(root->data);
            return;
        }
        leafBoundary(root->left,ans);
        leafBoundary(root->right,ans);
    }
    
    
    void rightBoundary(Node *root,vector<int>&ans)
    {
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) return;
        if(root->right!=NULL)
        {
            rightBoundary(root->right,ans);
        }
        else
        {
            rightBoundary(root->left,ans);
        }
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        else
        {
            ans.push_back(root->data);
        }
        leftBoundary(root->left,ans);
        leafBoundary(root->left,ans);
        leafBoundary(root->right,ans);
        rightBoundary(root->right,ans);
        return ans;
    }
};