#include <bits/stdc++.h>

using namespace std;

int main()
{   vector<int>a;
    int n;
    cin>>n;
    int key;
    cin>>key;
    
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    int sum=0;
    int j =0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        
        while(sum>key){
            sum=sum-a[j];
            j++;
        }
        
        if(sum==key){
            cout<<j+1<<" "<<i+1;
            return 0;
        }
    }
    cout<<"no subarray found!"<<endl;
    return 0;
}
