bool b = true;

int isBalancedUtil(Node *root)
{
    if(root == NULL) return 0;
    
    int lh = isBalancedUtil(root->left);
    int rh = isBalancedUtil(root->right);
    
    if(abs(lh-rh) > 1)
    {
        b = false;
    }
    
    return max(lh,rh)+1;
}
bool isBalanced(Node *root)
{
    //  Your Code here
    isBalancedUtil(root);
    bool f = b;
    b = true;
    return f;
}

