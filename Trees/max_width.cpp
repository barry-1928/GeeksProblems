int getMaxWidth(Node* root)
{
   // Your code here
   queue<Node*> q;
   q.push(root);
   int max1 = 0;
   while(!q.empty())
   {
       int cnt = q.size();
       max1 = max(max1,cnt);
       while(cnt--)
       {
            Node *front = q.front();
            if(front->left)
            {
                q.push(front->left);
            }
            if(front->right)
            {
                q.push(front->right);
            }
            q.pop();
       }
   }
   return max1;
}

