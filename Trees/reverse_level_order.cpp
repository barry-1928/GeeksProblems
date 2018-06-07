void reversePrint(Node *root)
{
    //Your code here
    queue<Node*> q;
    stack<Node*> final;
    q.push(root);
    while(!q.empty())
    {
        int cnt = q.size();
        while(cnt--)
        {
            Node *temp = q.front();
            if(temp->right)
            {
                q.push(temp->right);
            }
            if(temp->left)
            {
                q.push(temp->left);
            }
            final.push(q.front());
            q.pop();
        }
    }
    while(!final.empty())
    {
        cout<<final.top()->data<<" ";
        final.pop();
    }
}
