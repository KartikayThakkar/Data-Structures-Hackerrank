void ReversePrint(Node *head)
{
Node*p;
        p=head;
        if(p){
                ReversePrint(p->next);
                cout<<p->data<<"\n";
                
        }
        }