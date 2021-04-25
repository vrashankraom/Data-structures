#include <bits/stdc++.h>

using namespace std;

int dequeue(stack<int>&s){
    //if the stack has only one element then return it and pop it.
    if(s.size()==1){
        int a= s.top();
        s.pop();
        return a;
    }
    
    //using recursion stack,hold all elements except the last element in the stack.
    int cur=s.top();
    s.pop();
    
    //The a value(last element from the stack) is returned and stored in res.
    int res = dequeue(s);
    
    //Push all the elements except the last element in inverted fashion
    s.push(cur);
    return res;
}

int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    int ans = dequeue(s);
    cout<<ans<<endl;
    ans = dequeue(s);
    cout<<ans<<endl;
    ans = dequeue(s);
    cout<<ans;

    return 0;
}
