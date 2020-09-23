//This is a function, that returns a reversed SLL

ReverseSingleLinkedList(node* head){
node* prev=NULL;
node* cur=head;
node* next=NULL;
if(head==NULL && head->link==NULL){
  return head;
}
while(cur!=NULL){
next=cur->link;
cur->link=prev;
prev=cur;
cur=next;
}
return prev;
}
