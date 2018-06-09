/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/*you are required to 
complete this function */
bool hasPathSum(Node *root, int sum)
{
   //Your code here
   if(root->left == NULL && root->right == NULL)
   {
       sum-=root->data;
       if(sum == 0) return true;
       return false;
   }
   bool b = false;
   if(root->left)
   {
       b = b | hasPathSum(root->left,sum-root->data);
   }
   if(root->right)
   {
       b = b | hasPathSum(root->right,sum-root->data);
   }
   return b;
}
