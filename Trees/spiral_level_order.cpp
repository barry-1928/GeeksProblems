void printSpiral(Node *root)
{
     //Your code here
     stack<Node*> st1;
     stack<Node*> st2;
     st1.push(root);
     
     while(!st1.empty() || !st2.empty())
     {
         while(!st1.empty())
         {
             Node *temp = st1.top();
             cout<<temp->data<<" ";
             if(temp->right) st2.push(temp->right);
             if(temp->left) st2.push(temp->left);
             st1.pop();
         }
         while(!st2.empty())
         {
             Node *temp = st2.top();
             cout<<temp->data<<" ";
             if(temp->left) st1.push(temp->left);
             if(temp->right) st1.push(temp->right);
             st2.pop();
         }
     }
}
