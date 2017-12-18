Node* Insert(Node *head,int data)
{
Node *temp=new Node();
temp->data=data;
        temp->next=NULL;
if(head==NULL){
        head=temp;
}
else{
temp->next=head;
head=temp;
}
        return head;
}