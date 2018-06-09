void mirror(Node* node) 
{
     // Your Code Here
     if(node == NULL) return;
     
     mirror(node->left);
     mirror(node->right);
     swap(node->left,node->right);
}
