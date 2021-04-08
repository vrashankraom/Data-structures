//Kth Largest number in an Array

//Using MinHeap

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int c;
    cin>>n;
    priority_queue <int,vector<int>,greater<int>>minheap;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>c;
        a.push_back(c);
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        minheap.push(a[i]);
        if(minheap.size()>k){
            minheap.pop();
        }
    }
    cout<<minheap.top()<<endl;

    return 0;
}

//Using MaxHeap
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int c;
    cin>>n;
    priority_queue <int>maxheap;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>c;
        a.push_back(c);
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        maxheap.push((-1)*a[i]);
        if(maxheap.size()>k){
            maxheap.pop();
        }
    }
    cout<<(-1)*maxheap.top()<<endl;

    return 0;
}
