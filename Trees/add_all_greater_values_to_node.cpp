int sum = 0;

void modify_utils(Node *root)
{
    if(root == NULL) return;
    modify_utils(root->right);
    int temp = root->data;
    root->data=temp+sum;
    sum+=temp;
    modify_utils(root->left);
}
void modify(Node **root)
{
    // Your code here
    Node *node = *root;
    modify_utils(node);
    sum = 0;
}
