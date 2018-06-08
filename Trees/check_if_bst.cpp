bool b = true;
int max1 = -1;

void isBSTUtil(Node *root)
{
    if(root == NULL) return;
    
    isBSTUtil(root->left);
    if(root->data <= max1)
    {
        b = false;
    }
    else
    {
        max1 = root->data;
    }
    isBSTUtil(root->right);
}
bool isBST(Node* root) {
    // Your code here
    isBSTUtil(root);
    bool f = b;
    b = true;
    max1 = -1;
    return f;
}

