#include <iostream>
using namespace std;

int MAXSIZE = 10;
int queue[10];
int front = 0;
int rear = -1;

bool isEmpty(){
    if(rear<front)
       return true;
    else
       return false;
}

bool isFull(){
    return rear==MAXSIZE-1;
}
void insert(int a){
    if(!isFull()){
    rear = rear+1;
    queue[rear]=a;
    cout<<a<<" inserted successfully"<<endl;
    }
    else{
        cout<<"The queue is Full!"<<endl;
    }
}

void removeData(){
    if(!isEmpty()){
    cout<<queue[front]<<" removed from queue successfully"<<endl;
    front =  front +1;
    }
    else{
        cout<<"The queue is Empty!"<<endl;
    }
}

void display(){
    for(int i=front;i<=rear;i++){
        cout<<queue[i]<<endl;
    }
    cout<<endl;
}


int main()
{
    
   insert(1);
   insert(2);
   insert(3);
   insert(4);
   insert(5);
   insert(6);
   insert(7);
   insert(8);
   insert(9);
   insert(10);
   insert(11);
   
   
   display();
   removeData();
   removeData();
   removeData();
   removeData();
   removeData();
   removeData();
   removeData();
   removeData();
   display();
   
   removeData();
   display();
   removeData();
   removeData();

    

    return 0;
}
