Node* InsertNth(Node *head,int data,int position)
{
Node *temp=new Node();
temp->data=data;
//temp->next=NULL;

        
if(position==0){
        temp->next=head;
        head=temp;
        return head;
}        
else{
Node *p = head,*pre;
int i=0;   
while (position-i>0) {
        pre=p;
        p=p->next;
        i++;
    }
pre->next=temp;
temp->next=p;
return head;
 }
}