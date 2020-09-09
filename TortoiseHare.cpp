//This code will find the duplicate number in an array using space complexity of O(1)


#include <bits/stdc++.h>

using namespace std;

int duplicate(vector<int>&arr){
    int tortoise = arr[0];
    int hare = arr[0];
    //tortise moves one step
    //hare moves two steps
    do{
        tortoise = arr[tortoise];
        hare=arr[arr[hare]];
    }while(tortoise!=hare);
    
    //bring hare to the initial position
    hare=arr[0];
    //move both hare and tortoise one step
    while(tortoise!=hare){
        tortoise=arr[tortoise];
        hare=arr[hare];
    }
    return tortoise;
}
int main()
{
    int n,temp;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<duplicate(arr);
    

    return 0;
}
