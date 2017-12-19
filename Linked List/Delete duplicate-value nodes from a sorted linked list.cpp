Node* RemoveDuplicates(Node *head)
{
               Node *p=head;
  while(p->next!=NULL){
          if(p->data==p->next->data){
                  p->next=p->next->next;
          }
        else{
                p=p->next; 
        }
  }   
        return head;
}