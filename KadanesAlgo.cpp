#include <bits/stdc++.h>

using namespace std;

void maxSubArray(vector<int>&a){
    //Initialising sum to 0 and maxi to minimum number
    
    int sum=0;
    int maxi = INT_MIN;
    
    //Two indices to hold the start and end of the index of max subarray
    int index1;
    int index2;
    
    //Initialising s to 0
    int s=0;
    for(int i=0;i<a.size();i++){
        sum = sum+a[i];
        if(sum>maxi){
            maxi=sum;
            index1=s;
            index2=i;
        }
        if(sum<=0){
            sum=0;
            s=i+1;
        }
        
    }
    cout<<maxi<<endl;
    for(int i=index1;i<=index2;i++){
        cout<<a[i]<<" ";
    }
    
}

int main()
{
    int n;
    int d;
    cout<<"Please enter the array count"<<endl;
    cin>>n;
    vector<int>a;
    cout<<"Please enter the array to find the maximum subarray"<<endl;

    
    for(int i=0;i<n;i++){
        cin>>d;
        a.push_back(d);
    }
     
    maxSubArray(a);

    return 0;
}
