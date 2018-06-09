//structure of tree and mirror image must be the same

bool isFoldableUtil(node *root1, node *root2)
{
    if(root1 == NULL && root2 == NULL) return true;
    if((root1 == NULL) ^ (root2 == NULL)) return false;
    
    return isFoldableUtil(root1->left,root2->right) && isFoldableUtil(root1->right,root2->left);
}

bool isFoldable(struct node *root)
{
  // Your code goes here
  bool b = isFoldableUtil(root->left,root->right);
  return b;
}
