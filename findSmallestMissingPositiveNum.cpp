#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int,bool>map;
    vector<int>a;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    
    for(int i=0;i<n;i++){
        map[i]=false;
    }
    
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            map[a[i]]=true;
        }
    }
    for(int i=0;i<n;i++){
        if(map[i]==false){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
