
#include <iostream>

using namespace std;
struct node{
    int data;
    node* next;
};
void InsertFront(node** tail,int i){
    node* temp=new node;
    temp->data=i;
    if(*tail==NULL){
        *tail=temp;
        (*tail)->next=*tail;
        return;
    }
    temp->next=(*tail)->next;
    (*tail)->next=temp;
    return;
}
void InsertEnd(node** tail,int i){
    node* temp=new node;
    temp->data=i;
    if(*tail==NULL){
        *tail=temp;
        (*tail)->next=*tail;
        return;
    }
    temp->next=(*tail)->next;
    (*tail)->next=temp;
    (*tail)=temp;
    return;
}
void DeleteFront(node** tail){
    node* temp=*tail;
    node* temp1=*tail;
    temp=(temp->next)->next;
    temp1=(*tail)->next;
    delete(temp1);
    temp1=NULL;
    (*tail)->next=temp;
}
void DeleteEnd(node** tail){
    node* temp=*tail;
    node* temp1;
    do{
        temp1=temp;
        temp=temp->next;
    }while(temp->next!= (*tail)->next);
    temp1->next=(*tail)->next;
    delete(temp);
    temp=NULL;
    *tail=temp1;
}
void Display(node* tail){
    node* temp=tail;
    do{
         temp=temp->next;
        cout<<temp->data<<" ";
       
    }while(temp->next!=tail->next);
    cout<<endl;
}

int main()
{
    node* tail=NULL;
    for(int i=0;i<10;i++){
        InsertFront(&tail,i);
    }
    Display(tail);
    tail=NULL;
    for(int i=0;i<10;i++){
        InsertEnd(&tail,i);
    }
    Display(tail);
     int i=0;
    while(i!=4){
    DeleteEnd(&tail);
    i++;
    }
    Display(tail);
    i=0;
    while(i!=2){
    DeleteFront(&tail);
    i++;
    }
    Display(tail);
   
   
    return 0;
}
