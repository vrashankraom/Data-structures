#include <bits/stdc++.h>
using namespace std;

void addAtBottom(stack<int>&st,int ele){
    //if Stack is empty, insert directly(so that the ele will go to last end of stack)
    if(st.empty()){
        st.push(ele);
    }
    //if stack isn't empty, the make tail recursion again, to make stack empty and add the ele,
    //later add the remaining elements
    else{
        int temp = st.top();
        st.pop();
        addAtBottom(st,ele);
        st.push(temp);
    }
}

void reverse(stack<int>&st){
    //Base Condition
    if(st.empty()){
        return;
    }
    //Get the last element by tail recursion
    int ele = st.top();
    st.pop();
    reverse(st);
    
    //Send the Element based on the call stack
    addAtBottom(st,ele);
    
}

int main()
{
   
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    
    


    return 0;
}
