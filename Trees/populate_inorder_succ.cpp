node *pr = NULL;

void populate_utils(node *p)
{
    if(p == NULL) return;
    
    populate_utils(p->left);
    if(pr == NULL)
    {
        pr = p;
    }
    else
    {
        pr->next = p;
        pr = p;
    }
    populate_utils(p->right);
}
void populateNext(struct node* p)
{
// Your code goes here
    populate_utils(p);
    if(pr)
        pr->next = NULL;
    pr = NULL;
}
