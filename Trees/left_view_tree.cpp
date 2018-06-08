int max1 = -1;

void print_left_view_util(Node *root, int level)
{
    if(root == NULL) return;
    if(max1 < level)
    {
        cout<<root->data<<" ";
        max1 = level;
    }
    print_left_view_util(root->left,level+1);
    print_left_view_util(root->right,level+1);
}
void leftView(Node *root)
{
   // Your code here
   print_left_view_util(root,0);
   max1 = -1;
}
