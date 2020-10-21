//Due to usage of two pointers start and end, time complexity is O(n)
#include <bits/stdc++.h>

using namespace std;
int MinSubArray(vector<int>arr,int target){
    int start=0;
    int end=0;
    int curr=0;
    int minlen=arr.size()+1;
    for(int end=0;end<arr.size();end++){
        curr=curr+arr[end];
        while(curr>target && start<arr.size()){
            if(end-start+1<minlen){
                minlen=end-start+1;
            }
            curr=curr-arr[start++];
        }
    }
    return minlen;
}


int main()
{
    int l;
    cin>>l;
    while(l--){
    int n,target;
    vector<int>arr;
    cin>>n;
    cin>>target;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    
    cout<<MinSubArray(arr,target)<<endl;;
    } 

    return 0;
}
