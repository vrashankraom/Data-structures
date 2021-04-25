#include <bits/stdc++.h>

using namespace std;

class que{
    
    stack<int>s;
    stack<int>k;
    
public:
    void enqueue(int value){
    s.push(value);
    }

    int dequeue(){
     if(s.empty()&&k.empty()){
         return -1;
     }
     
// if k is empty, we need to push all elements from s to k then return the top element
     if(k.empty()){
         while(!s.empty()){
             k.push(s.top());
             s.pop();
         }
     }
     int res = k.top();
     k.pop();
     return res;
    }
};
int main()
{
    
   que q;
   q.enqueue(1);
   q.enqueue(2);
   q.enqueue(3);
   q.enqueue(4);
   q.enqueue(5);
   
   cout<<q.dequeue()<<endl;
   cout<<q.dequeue()<<endl;
   
   q.enqueue(6);
   cout<<q.dequeue()<<endl;
   cout<<q.dequeue()<<endl;
   cout<<q.dequeue()<<endl;
   cout<<q.dequeue()<<endl;
   cout<<q.dequeue()<<endl;

    return 0;
}
