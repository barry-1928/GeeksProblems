Node * inOrderSuccessor(Node *root, Node *x)
{
    Node *succ = NULL;
    //Your code here
    if(x->right)
    {
        x = x->right;
        succ = x;
        while(x->left)
        {
            succ = x->left;
            x = x->left;
        }
    }
    if(succ) return succ;
    
    while(root!=x)
    {
        if(x->data < root->data)
        {
            succ = root;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return succ;
}
