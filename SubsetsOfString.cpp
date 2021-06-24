#include <bits/stdc++.h>
int count;
using namespace std;



void subsets(char *a,int i,int j,char *temp){
    if(a[i]=='\0'){
        temp[j]='\0';
        cout<<temp<<endl;
        return;
    }
    
    temp[j]=a[i];
    subsets(a,i+1,j+1,temp);
    subsets(a,i+1,j,temp);
}

int main()
{
    char a[100];
    cin>>a;
    char temp[100];
    subsets(a,0,0,temp);

    return 0;
}
