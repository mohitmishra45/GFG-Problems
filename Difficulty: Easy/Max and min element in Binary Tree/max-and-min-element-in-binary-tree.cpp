/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    int findMax(Node *root) {
        // code here
        if(root==NULL) return INT_MIN;
        int lmax=findMax(root->left);
        int rmax=findMax(root->right);
        return max(root->data,max(lmax,rmax));
    }

    int findMin(Node *root) {
        
        // code here
        if(root==NULL) return INT_MAX;
        int lmin=findMin(root->left);
        int rmin=findMin(root->right);
        return min(root->data,min(lmin,rmin));
    }
};