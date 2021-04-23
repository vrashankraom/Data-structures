

#include <bits/stdc++.h>

using namespace std;

void reverse(string s){
    stack<string>st;
    for(int i=0;i<s.size();i++){
        string temp="";
        while(s[i]!=' '&& i<s.size()){
            temp=temp+s[i];
            i++;
        }
        st.push(temp);
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}


int main()
{
    
    
    string s="hello! man how are you?";
    reverse(s);

    return 0;
}
