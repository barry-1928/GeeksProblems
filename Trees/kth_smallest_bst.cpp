/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    int lCount;
 
    Node* left;
    Node* right;
};*/
int KthSmallestElement(Node *root, int k)
{
    //add code here.
    int lCount = root->lCount;
    if(lCount == k-1)
    {
        return root->data;
    }
    if(lCount >= k)
    {
        return KthSmallestElement(root->left,k); //need to exclude right subtree
    }
    else
    {
        return KthSmallestElement(root->right,k-lCount-1); //need to exclude left subtree + current root
    }
}
