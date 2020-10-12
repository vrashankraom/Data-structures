#include<bits/stdc++.h>
using namespace std;
int countNumber(string str,int left,int right){
    while(left>=0 && right<str.length() && str[left]==str[right]){
        right=right+1;
        left=left-1;
        
    }
    return right-left-1;
}
void permutations(string str){
    if(str.length()==0){
        cout<<"String does not exits";
        return;
    }
    if(str.length()==1){
        cout<<str[0];
        return;
    }
    int start=0;
    int end=0;
    for(int i=0;i<str.length();i++){
        int len1=countNumber(str,i,i);
        int len2=countNumber(str,i,i+1);
        int len=max(len1,len2);
        if(len>end-start){
            start = i-(len-1)/2;
            end = i+len/2;
           // cout<<start<<endl<<end<<endl;
        }
    }
        for(int i=start;i<=end;i++){
            cout<<str[i];
        }
}



int main(){
    string str;
    cin>>str;
    permutations(str);
    return 0;
}
