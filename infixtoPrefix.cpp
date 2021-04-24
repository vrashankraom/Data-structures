#include <bits/stdc++.h>

using namespace std;

int prec(char a){
    if(a=='+'||a=='-'){
        return 1;
    }
    else if(a=='*'||a=='/'){
        return 2;
    }
    else if(a=='^'){
        return 3;
    }
    else{
        return -1;
    }
    
}

string infixtoPrefix(string s){
    stack<char>st;
    string res="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            res=res+s[i];
        }
        else if(s[i]==')'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            while(!st.empty() && st.top()!=')'){
                res=res+st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                res=res+st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res=res+st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}

int main()
{
    string s = "(a-b/c)*(a/k-d)";
    reverse(s.begin(),s.end());
    cout<<infixtoPrefix(s)<<endl;
    return 0;
}
