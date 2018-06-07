void levelOrder(Node* node)
{
  //Your code here
  queue<Node*> q;
  q.push(node);
  
  while(!q.empty())
  {
      Node *temp = q.front();
      cout<<temp->data<<" ";
      if(temp->left) q.push(temp->left);
      if(temp->right) q.push(temp->right);
      q.pop();
  }
}
