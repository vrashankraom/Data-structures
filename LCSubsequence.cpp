#include <bits/stdc++.h>

using namespace std;

int findLCS(string s1,string s2){
    if(s1.size()==0 || s2.size()==0)
        return 0;
    int dp[s1.size()+1][s2.size()+1];
    for(int i=0;i<=s1.size();i++){
        for(int j=0;j<=s2.size();j++){
            dp[i][j]=0;
        }
    }

     for(int i=0;i<=s1.size();i++){
        for(int j=0;j<=s2.size();j++){
            if(s1[i]==s2[j]){
               dp[i+1][j+1] = dp[i][j] + 1;
            }
            else{
                dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
            }
        }
    }
    
    return dp[s1.size()][s2.size()];

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
