map<int,int> mp;

void printAncestorsUtil(Node *root, int par)
{
    if(root == NULL) return;
    
    mp[root->data] = par;
    printAncestorsUtil(root->left,root->data);
    printAncestorsUtil(root->right,root->data);
}


bool printAncestors(struct Node *root, int target)
{
     // Code here
    printAncestorsUtil(root, root->data);
    //cout<<target<<endl;
    int p = target;
    if(p == root->data)
    {
        cout<<endl;
        return true;
    }
    while(1)
    {
        p = mp[p];
        cout<<p<<" ";
        if(p == mp[p]) break;
    }
    cout<<endl;
    mp.clear();
    return true;
}
