//Gets the Nth Smallest number in an array

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
        maxheap.push(a[i]);
        if(maxheap.size()>k){
            maxheap.pop();
        }
    }
    cout<<maxheap.top()<<endl;

    return 0;
}
