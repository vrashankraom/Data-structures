#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=2;i<=n;i++){
        a[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(a[i]==i){
            for(int j=i*i;j<=n;j=j+i){
                if(a[j]==j){
                    a[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<a[n]<<" ";
        n=n/a[n];
    }
    
    return 0;
}
