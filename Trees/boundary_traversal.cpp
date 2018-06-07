void printLeftBoundary(Node *root)
{
    if(!root) return;
    if(!(root->left==NULL &&  root->right==NULL))
    {
        cout<<root->data<<" ";
    }
    if(root->left)
    {
        printLeftBoundary(root->left);
    }
    else
    {
        printLeftBoundary(root->right);
    }
}

void printRightBoundary(Node *root)
{
    if(!root) return;
    
    if(root->right)
    {
        printRightBoundary(root->right);
    }
    else
    {
        printRightBoundary(root->left);
    }
    if(!(root->left==NULL && root->right==NULL))
    {
        cout<<root->data<<" ";
    }
}

void printLeaves(Node *root)
{
    if(!root) return;
    
    printLeaves(root->left);
    if(!root->left && !root->right)
    {
        cout<<root->data<<" ";
    }
    printLeaves(root->right);
}
void printBoundary(Node *root)
{
     if(!root) return;
     //Your code here
     cout<<root->data<<" ";
     printLeftBoundary(root->left);
     
     printLeaves(root);
     
     printRightBoundary(root->right);
}
