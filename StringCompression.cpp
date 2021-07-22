#include <bits/stdc++.h>

using namespace std;

string findCompressedString(string s1){
    int sum=1;
    string result="";
    if(s1.size()==0 || s1.size()==1){
        return s1;
    }
    for(int i=1;i<s1.size();i++){
        if(s1[i-1]==s1[i]){
            sum++;
        }
        else{
            
            result = result + s1[i-1] + to_string(sum);
            sum=1;
        }
    }
            result = result + s1[s1.size()-1] +to_string(sum);
            if(s1.size()<result.size()){
                return s1;
            }else{
            return result;
            }
}

int main()
{
    string s1;

    cin>>s1;

    cout<<findCompressedString(s1);
    return 0;
}
