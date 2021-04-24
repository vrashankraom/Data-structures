//PostFix Evaluation

#include <bits/stdc++.h>

using namespace std;

int postfixEvaluation(string s){
    stack<int>st;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            
            switch(s[i]){
                case '+': st.push(op1+op2);
                break;
                case '-': st.push(op1-op2);
                break;
                case '*': st.push(op1*op2);
                break;
                case '/': st.push(op1/op2);
                break;
                case '^': st.push(pow(op1,op2));
                break;
                default:return -9999;
            }
        }
    }
    return st.top();
}

int main()
{
    string s;
    cin>>s;
    int result=postfixEvaluation(s);
    cout<<result;
    return 0;
}

//PreFix Evaluation

#include <bits/stdc++.h>

using namespace std;

int prefixEvaluation(string s){
    stack<int>st;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            
            switch(s[i]){
                case '+': st.push(op1+op2);
                break;
                case '-': st.push(op1-op2);
                break;
                case '*': st.push(op1*op2);
                break;
                case '/': st.push(op1/op2);
                break;
                case '^': st.push(pow(op1,op2));
                break;
                default:return -9999;
            }
        }
    }
    return st.top();
}

int main()
{
    string s;
    cin>>s;
    int result=prefixEvaluation(s);
    cout<<result;

    return 0;
}

