#include <bits/stdc++.h>

using namespace std;

int main()
{   
    unordered_map<int,int>map;
    vector<int>a;
    
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    for(int i=0;i<n;i++){
        map[a[i]]=-1;
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(map[a[i]]!=-1){
            mini = min(mini,map[a[i]]);
        }
        else{
            map[a[i]]=i;
        }
    }
    for(int i=0;i<n;i++){
        if(map[a[i]]==mini){
            cout<<a[i];
          break;
        }
    }
   

    return 0;
}
