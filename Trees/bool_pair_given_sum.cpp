/*Complete the function below
Node is as follows
struct node
{
    int val;
    struct node *left, *right;
};
*/

bool b = false;

bool search(node *root, int key)
{
    if(root == NULL) return false;
    
    if(key < root->val)
    {
        return search(root->left,key);
    }
    else if(key == root->val)
    {
        return true;
    }
    else
    {
        return search(root->right,key);
    }
}
void isPairPresentUtil(node *mainroot, node *root, int target)
{
    if(root == NULL) return;
    
    if(target!=2*root->val && search(mainroot,target-root->val))
    {
        b = true;
        if(b) return;
    }
    isPairPresentUtil(mainroot,root->left,target);
    if(b) return;
    isPairPresentUtil(mainroot,root->right,target);
    if(b) return;
    
}
bool isPairPresent(struct node *root, int target)
{
    //add code here.
    isPairPresentUtil(root,root,target);
    bool f = b;
    b = false;
    return f;
}
