#include <bits/stdc++.h>

using namespace std;

class stac{
    
    queue<int>q;
    queue<int>k;
    
public:
    void push(int value){
      q.push(value);
     }
    
    void pop(){
        
        //until there is one element in the queue(1), pop from queue(1) and put them in k
        while(!q.empty() && q.size()!=1){
            k.push(q.front());
            q.pop();
        }
        //remove that last element from queue(1) 
        q.pop();
        
        //swap both k and q so that poping will be from one side only
        swap(k,q);
    }
    int top(){
        
            //until there is one element in the queue(1), pop from queue(1) and put them in k

            while(!q.empty() && q.size()!=1){
            k.push(q.front());
            q.pop();
        }
        //get the value from last element of queue(1)
        int value = q.front();
        //put that value in the queue
        k.push(value);
        //swap both k and q so that poping will be from one side only
        swap(k,q);
        return value;
    }
};
int main()
{
    
   stac s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
 
   s.pop();
   cout<<s.top()<<endl;
   
   s.push(6);
   s.pop();
   s.pop();
   cout<<s.top()<<endl;
   
  
    return 0;
}
