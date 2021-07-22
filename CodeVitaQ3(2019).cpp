#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int>v;
    cin>>n;
    vector<int>a(n+1,0);
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                a[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(a[i]==0)
            v.push_back(i);
    }
    
    int count=0;
    for(int i=2;i<v.size();i++){
        int sum=0;
        for(auto j:v){
            sum=sum+j;
            if(sum==v[i]){
                count++;
                break;
            }
            if(sum>v[i]){
                break;
            }
        }
    }
    
    cout<<count;
    
    
    return 0;
}
