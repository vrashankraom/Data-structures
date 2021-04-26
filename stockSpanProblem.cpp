
// Program to return an array having values such that, the array elements has days,having default value 1;
//days will be increased if the a[i] value is > top of the stack element value.
#include <bits/stdc++.h>

using namespace std;

vector<int> getStockSpanAns(vector<int>a){
    vector<int>ans;
    stack<pair<int,int>>s;
    for(int i=0;i<a.size();i++){
        int days =1;
        while(!s.empty() && s.top().first<=a[i]){
            days = days + s.top().second;
            s.pop();
        }
        s.push({a[i],days});
        ans.push_back(days);
    }
    return ans;
}


int main()
{
    vector<int>a;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    
    a = getStockSpanAns(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
