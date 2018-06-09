/*Complete the function
Node is as follows:
struct node
{
    int data;
    struct node *left, *right;
};
*/

node *n1 = NULL;
node *n2 = NULL;
node *pr = NULL;

void correctBSTUtil(node *root)
{
    if(root == NULL) return;
    
    correctBSTUtil(root->left);
    if(pr == NULL)
    {
        pr = root;
    }
    else
    {
        if(root->data < pr->data)
        {
            if(n1 == NULL) n1 = pr;
            else n2 = root;
        }
        pr = root;
    }
    correctBSTUtil(root->right);
}
struct node *correctBST( struct node* root )
{
    //add code here.
    correctBSTUtil(root);
    swap(n1->data,n2->data);
    n1 = pr = n2 = NULL;
    return root;
}
