/* The structure of a BST Node is as follows:
struct Node 
{
    int data;
    Node * right, * left;
}; */
void printNearNodes(Node *root, int l, int h)
{
  // your code goes here   
  if(root == NULL) return;
  
  if(root->data > h)
  {
      printNearNodes(root->left,l,h);
  }
  else if(root->data < l)
  {
      printNearNodes(root->right,l,h);
  }
  else
  {
      printNearNodes(root->left,l,h);
      cout<<root->data<<" ";
      printNearNodes(root->right,l,h);
  }
}
