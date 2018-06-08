bool isIsomorphic(Node *root1,Node *root2)
{
    //add code here.
    if(root1 == NULL && root2 == NULL) return true;
    
    if(root1 == NULL || root2 == NULL) return false; //one of them exists, other does not
    
    if(root1->data != root2->data) return false;
    
    return ((isIsomorphic(root1->left,root2->left) && isIsomorphic(root1->right,root2->right))
            || (isIsomorphic(root1->left,root2->right) && isIsomorphic(root1->right,root2->left)));
}
