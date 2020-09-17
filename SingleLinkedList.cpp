#include <iostream>
using namespace std;

struct node{
    int data;
    node* link;
};
node *head =NULL;
node* InsertFront(node* head){
    int element;
    node* temp = new node;
    cout<<"Please enter the element"<<endl;
    cin>>element;
    temp->data =element;
    temp->link =head;
    head=temp;
    return head;
}
node* InsertEnd(node* head){
    int element;
    node* temp=new node;
    cout<<"Please enter the element"<<endl;
    cin>>element;
    node* head1 =head;
    temp->data=element;
    temp->link=NULL;
    if(head==NULL){
        head=temp;
        return head;
    }
    while(head->link!=NULL){
        head=head->link;
    }
    head->link=temp;
    return head1;
}

node* DeleteFront(node* head){
    node* temp = new node;
    temp=head;
    head=head->link;
    temp->link=NULL;
    delete(temp);
    return head;
}
node* DeleteEnd(node* head){
    node* temp = new node;
    temp=head;
    node* head1 =head;
    while(head->link!=NULL){
        temp=head;
        head=head->link;
    }
    temp->link=NULL;
    delete(head);
    return head1;
}
void Display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->link;
    }
}
int main()
{
   
   while(1){
       
       int option;
       cout<<"Please choose your option"<<endl;
       cout<<"1) Insert at the front of the Linked List"<<endl<<"2) Insert at the end of the Linked List"<<endl<<"3) Delete at the front of the Linked List"<<endl<<"4) Delete at the end of the Linked List"<<endl<<"5) Display all the elements"<<endl<<"6) Exit"<<endl;
       cin>>option;
       
       switch(option){
           case 1:head=InsertFront(head);
           break;
           case 2:head=InsertEnd(head);
           break;
           case 3:head=DeleteFront(head);
           break;
           case 4:head=DeleteEnd(head);
           break;
           case 5:Display(head);
           break;
           case 6:return 0;
           default:cout<<"Sorry the entered number is invalid"<<endl;
       }
   }
   return 0;
}
