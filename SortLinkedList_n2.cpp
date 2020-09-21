//Program to sort the LinkedList in O(n2);

#include <iostream>

using namespace std;
struct node{
    int data;
    node* link;
};

void InsertEnd(node** head){
    node* temp = new node;
    node* temp1 =*head;
    int value;
    cout<<"Enter the value ";
    cin>>value;
    temp->data=value;
    if(*head==NULL)
    {
        temp->link=NULL;
        *head=temp;
        return;
    }
    while(temp1->link!=NULL){
        temp1=temp1->link;
    }
    temp->link=NULL;
    temp1->link=temp;
}

void Sort(node** head){
    node* front=*head;
    node* back=*head;
    while(back!=NULL){
        front =back->link;
        while(front!=NULL){
            if(back->data>front->data){
                swap(back->data,front->data);
            }
            front=front->link;
        }
        back=back->link;
    }
   
    
}
void Display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    while(1){
        int choice;
        cout<<"Choose 1 for adding element and 2 for sorting"<<endl;
        cin>>choice;
        switch(choice){
            case 1:InsertEnd(&head);
            break;
            case 2:Sort(&head);
            break;
            case 3:Display(head);
            break;
            case 4:return 0;
            break;
            default:cout<<"Invalid option"<<endl;
        }
    }

    return 0;
}
