#include<bits/stdc++.h>
using namespace std;
bool isCompleteBT(struct node* root)
{
    queue<node*> q;
    q.push(root);
    int c = 0;
    bool b = false;
    while(!q.empty())
    {
        int cnt = q.size();
        if(cnt == (1<<c))
        {
            bool f1 = true;
            while(cnt--)
            {
                node *f = q.front();
                bool b1 = false, b2 = false;
                if(f->left) {b1 = true; q.push(f->left); }
                if(f->right) {b2 = true; q.push(f->right); }
                if(b2)
                {
                    if(!b1) return false;
                }
                if(!b1 && !b2)
                {
                    if(f1)
                        f1 = false;
                }
                else
                {
                    if(!f1) return false;
                }
                q.pop();
            }
        }
        else
        {
            if(!b)
            {
                b = true;
                bool f1 = true;
                while(cnt--)
                {
                    node *f = q.front();
                    bool b1 = false, b2 = false;
                    if(f->left) {b1 = true; q.push(f->left); }
                    if(f->right) {b2 = true; q.push(f->right); }
                    if(b2)
                    {
                        if(!b1) return false;
                    }
                    if(!b1 && !b2)
                    {
                        if(f1)
                            f1 = false;
                    }
                    else
                    {
                        if(!f1) return false;
                    }
                    q.pop();
                }
            }
            else
            {
                return false;
            }
        }
        c++;
    }
    return true;
    
}
