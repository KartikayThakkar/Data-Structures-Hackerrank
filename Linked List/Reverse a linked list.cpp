Node* Reverse(Node *head)
{
Node*prev=NULL;
        Node*nextptr=NULL;
        Node*current=head;
        while(current){
                nextptr=current->next;
                current->next=prev;
                prev=current;
                current=nextptr;
        }
        return prev;
        }