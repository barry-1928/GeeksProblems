vector<int> h;

void printPathsUtil(Node *root)
{
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL)
    {
        h.push_back(root->data);
        int p = h.size(),i;
        for(i=0;i<p;i++)
        {
            cout<<h[i]<<" ";
        }
        h.pop_back();
        cout<<"#";
        return;
    }
    
    h.push_back(root->data);
    printPathsUtil(root->left);
    printPathsUtil(root->right);
    h.pop_back();
}
void printPaths(Node* root)
{
    // Code here
    printPathsUtil(root);
    cout<<endl;
}
