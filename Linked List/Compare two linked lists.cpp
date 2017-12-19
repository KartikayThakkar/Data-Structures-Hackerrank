
int CompareLists(Node *headA, Node* headB)
{
  int i=0,j=0;
        Node *p=headA,*q=headB;
        while(p){
          p=p->next;
          i++;
          
  }
        while(q){
                q=q->next;
                j++;
        }
        
        if(i!=j){
                return 0;
        }
        else{while(headA!=NULL && headB!=NULL){
          if(headA->data!=headB->data){
                  return 0;
                 
                  
          }
          headA=headA->next;
          headB=headB->next;
          
  }
return 1;}
}