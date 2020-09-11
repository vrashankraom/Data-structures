//This algorithm find the maximum subarray with time complexity of O(n) and space of O(1)

#include <bits/stdc++.h>

using namespace std;
int maxSubArray(vector<int>&arr){
    int max_so_far =arr[0];
    int maximum=arr[0];
    for(int i=1;i<arr.size();i++){
        max_so_far = max(max_so_far +arr[i],arr[i]);
        if(max_so_far>maximum){
            maximum=max_so_far;
        }
    }
    return maximum;
}

int main()
{
    int n;
    vector<int>arr;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    
    cout<<maxSubArray(arr);
    

    return 0;
}
