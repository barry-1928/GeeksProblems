map<int,int> mp;

void find_sum(Node *root, int sum)
{
    if(root == NULL) return;
    
    mp[sum]+=root->data;
    find_sum(root->left,sum-1);
    find_sum(root->right,sum+1);
}
void printVertical(Node *root)
{
    //add code here.
    find_sum(root,0);
    for(auto &x: mp)
    {
        cout<<x.second<<" ";
    }
    mp.clear();
}
