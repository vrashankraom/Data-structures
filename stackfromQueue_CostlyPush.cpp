#include <bits/stdc++.h>

using namespace std;

class stac{
    
    queue<int>q;
    queue<int>k;
    
public:
    void push(int value){
    //Push the element int the k(2nd) stack
     k.push(value);
     //if the size of q(1st) stack is not empty, insert all the elements from q to k
     while(!q.empty()){
         k.push(q.front());
         q.pop();
     }
     //swap q and k
     swap(q,k);
    }
    //Removal will be done from 1st stack
    void pop(){
        if(q.empty()){
            return;
        }
        q.pop();
    }
    int top(){
        if(q.empty()){
            return -1;
        }
        return q.front();
    }
};
int main()
{
    
   stac s;
   s.push(1);
   s.push(2);
   s.push(3);
 
   s.pop();
   cout<<s.top()<<endl;
   
   s.push(6);
   s.pop();
   s.pop();
   cout<<s.top()<<endl;
   
  
    return 0;
}
