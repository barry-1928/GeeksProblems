int height(Node *node)
{
    if(node == NULL)
        return 0;
    
    return max(height(node->left),height(node->right))+1;
}
/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node)
{
   // Your code here
   if(node == NULL) return 0;
   
   int ld = diameter(node->left);
   int rd = diameter(node->right);
   
   int d_through_root = height(node->left) + height(node->right) + 1;
   return max(max(ld,rd),d_through_root);
}
