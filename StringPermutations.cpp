#include<bits/stdc++.h>
using namespace std;

void permutations(string str,int l,int n){
    if(l==n){
        cout<<str<<endl;
    }
    for(int i=l;i<=n;i++){
        swap(str[i],str[l]);
        permutations(str,l+1,n);
        swap(str[i],str[l]);
    }
}


int main(){
    string str;
    cin>>str;
    //sort(str.begin(),str.end());
    int i;
    for(i=0;str[i]!='\0';i++);
    permutations(str,0,i-1);
}
