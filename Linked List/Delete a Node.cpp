
Node* Delete(Node *head, int position)
{

if(position==0){
        Node* p=head;
        head=p->next;
        return head;      
}
else{
        int i;
        Node *p,*pre;
        p=head;
        
                while(position-i>0){
                pre=p;
                p=p->next;
                i++;
                }

pre->next=p->next;
        return head;

}


}