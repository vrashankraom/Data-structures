//Single Linked List in cpp Pass-By-Reference
//Instead of making global variables
//Head node in main function

#include <iostream>
using namespace std;

struct node{
    int data;
    node* link;
};

void InsertFront(node** head){
    int element;
    node* temp = new node;
    cout<<"Please enter the element"<<endl;
    cin>>element;
    temp->data =element;
    temp->link =*head;
    *head=temp;
}
void InsertEnd(node** head){
    int element;
    node* temp=new node;
    node* temp1=*head;
    cout<<"Please enter the element"<<endl;
    cin>>element;
    temp->data=element;
    temp->link=NULL;
    if(*head==NULL){
        *head=temp;
        return;
    }
    while(temp1->link!=NULL){
        temp1=temp1->link;
    }
    temp1->link=temp;
}

void DeleteFront(node** head){
    if(*head==NULL){
        return;
    }
    node* temp = *head;
    *head=(*head)->link;
    temp->link=NULL;
    delete(temp);
}
void DeleteEnd(node** head){
    if(*head==NULL){
        return;
    }
    node* temp = *head;
    node* temp1 =*head;
    while(temp1->link!=NULL){
        temp=temp1;
        temp1=temp1->link;
    }
    temp->link=NULL;
    delete(temp1);
}
void Display(node* head){
    cout<<"Elements in the list are ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->link;
    }
    cout<<endl;
}
int main()
{
   node *head =NULL;
   while(1){
       
       int option;
       cout<<"Please choose your option"<<endl;
       cout<<"1) Insert at the front of the Linked List"<<endl<<"2) Insert at the end of the Linked List"<<endl<<"3) Delete at the front of the Linked List"<<endl<<"4) Delete at the end of the Linked List"<<endl<<"5) Display all the elements"<<endl<<"6) Exit"<<endl;
       cin>>option;
       
       switch(option){
           case 1:InsertFront(&head);
           break;
           case 2:InsertEnd(&head);
           break;
           case 3:DeleteFront(&head);
           break;
           case 4:DeleteEnd(&head);
           break;
           case 5:Display(head);
           break;
           case 6:return 0;
           default:cout<<"Sorry the entered number is invalid"<<endl;
       }
   }
   return 0;
}
