void connect(Node *p)
{
   // Your Code Here
   queue<Node*> q;
   q.push(p);
   while(!q.empty())
   {
       int cnt = q.size();
       if(cnt == 1)
       {
           Node *temp = q.front();
           temp->nextRight = NULL;
           if(temp->left) q.push(temp->left);
           if(temp->right) q.push(temp->right);
           q.pop();
       }
       else
       {
           cnt-=2;
           Node *temp1 = q.front();
           q.pop();
           Node *temp2 = q.front();
           q.pop();
           if(temp1->left) q.push(temp1->left);
           if(temp1->right) q.push(temp1->right);
           if(temp2->left) q.push(temp2->left);
           if(temp2->right) q.push(temp2->right);
           temp1->nextRight = temp2;
           temp1 = temp2;
           while(cnt--)
           {
               temp2 = q.front();
               if(temp2->left) q.push(temp2->left);
               if(temp2->right) q.push(temp2->right);
               temp1->nextRight = temp2;
               temp1 = temp2;
               q.pop();
           }
           temp1->nextRight = NULL;
       }
   }
}

