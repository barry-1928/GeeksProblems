bool b = true;

int isSumTreeUtil(Node *root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return root->data;
    
    int left = isSumTreeUtil(root->left);
    int right = isSumTreeUtil(root->right);
    
    if(left+right != root->data)
    {
        b = false;
    }
    return left + right + root->data;
}
bool isSumTree(Node* root)
{
     // Your code here
     isSumTreeUtil(root);
     bool f = b;
     b = true;
     return f;
}
