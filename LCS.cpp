#include <bits/stdc++.h>

using namespace std;

string findLCS(string s1,string s2){
    string result="";
    if(s1.size()==0 || s2.size()==0)
        return result;
    int dp[s1.size()][s2.size()];
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            dp[i][j]=0;
        }
    }
    
     for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(s1[i]==s2[j]){
                if(i==0 || j==0){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                if(dp[i][j] > result.size()){
                    result = s1.substr(i-dp[i][j]+1,i+1);
                }
            }
        }
    }
    
    return result;
}


int main()
{
    string s1;
    string s2;
    
    cin>>s1;
    cin>>s2;
    
    cout<<findLCS(s1,s2);
    return 0;
}
