// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int>v,int i){
    cout<<"1st Array ";
    for(int k=0;k<=i-1;k++){
        cout<<v[k]<<" ";
    }
    cout<<endl;
    cout<<"2nd Array ";
    for(int k=i;k<=v.size()-1;k++){
        cout<<v[k]<<" ";
    }
    cout<<endl;
    
}

void findPairs(vector<int>v,int sum){
    int s=0;
    for(int i=v.size()-1;i>=0;i--){
        s=s+v[i];
        if((sum-s)<s && (v.size()-i)<=i){
            printArray(v,i);
        }
    }
}

int main() {
    vector<int>v;
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        sum=sum+c;
        v.push_back(c);
    }
    
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    findPairs(v,sum);
    return 0;
}
