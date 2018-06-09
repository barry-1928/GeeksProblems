//keep removing leaves if the sum from root to that node is greater than or equal to k

void del(node *root, int k)
{
	if(root == NULL) return;
	
	root->left = del(root->left,k-root->data);
	root->right = del(root->right,k-root->data);
	
	if(root->left == NULL && root->right == NULL)
	{
		if(k-root->data >= 0)
		{
			free(root);
			return NULL;
		}
	}
	return root;
}
