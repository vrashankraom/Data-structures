#include <bits/stdc++.h>

using namespace std;

class que{
    
    stack<int>s;
    
public:
    void enqueue(int value){
    s.push(value);
    }

    int dequeue(){
    //if the stack has only one element then return it and pop it.
    if(s.empty()){
        return -1;
    }
    if(s.size()==1){
        int a= s.top();
        s.pop();
        return a;
    }
    
    //using recursion stack,hold all elements except the last element in the stack.
    int cur=s.top();
    s.pop();
    
    //The a value(last element from the stack) is returned and stored in res.
    int res = dequeue();
    
    //Push all the elements except the last element in inverted fashion
    s.push(cur);
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
