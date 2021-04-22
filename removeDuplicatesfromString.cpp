//For Capital Characters

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string res;
    int a[25]={0};
    for(int i=0;i<s.size();i++){
        if(a[s[i]-65]==0){
        a[s[i]-65]=1;
        res=res+s[i];
        }
    }
    cout<<res;
    
    
    return 0;
}

//For Small Characters

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string res;
    int a[25]={0};
    for(int i=0;i<s.size();i++){
        if(a[s[i]-97]==0){
        a[s[i]-97]=1;
        res=res+s[i];
        }
    }
    cout<<res;
    
    
    return 0;
}
