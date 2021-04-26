
#include<bits/stdc++.h>
using namespace std;

void getTwoSumIndices(vector<int>a,int sum){
    unordered_map<int,int>map;
    
    for(int i=0;i<a.size();i++){
        if(map.find(sum-a[i])!=map.end()){
            cout<<map[sum-a[i]]+1<<" "<<i+1;
            return;
        }
        map[a[i]]=i;
    }
}


int main()
{
    vector<int>a;
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    
    getTwoSumIndices(a,sum);
    return 0;
}
