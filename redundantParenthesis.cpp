
#include <bits/stdc++.h>

using namespace std;

bool reduntantParenthesis(string s){
    stack<int>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+' || s[i]=='-'|| s[i]=='/' || s[i]=='*'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                return true;
            }
            while(s[i]=='+' || s[i]=='-'||s[i]=='/' || s[i]=='*'){
                st.pop();
            }
            st.pop();
        }
        
    }
    return false;
}

int main()
{
    string s ="(a+b)";
    
    if(reduntantParenthesis(s)){
        cout<<"Yes there is reduntantParenthesis";
    }
    else{
        cout<<"No reduntantParenthesis in equation";
    }

    return 0;
}
