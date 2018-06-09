int findSumTree(Node *node)
{
    if(node == NULL) return 0;
    
    int lsum = findSumTree(node->left);
    int rsum = findSumTree(node->right);
    
    int x = node->data;
    node->data = lsum + rsum;
    return x + lsum + rsum;
}

void toSumTree(Node *node)
{
    // Your code here
    findSumTree(node);
}

