
#include<bits/stdc++.h>
using namespace std;

bool getThreeSumIndices(vector<int>a,int sum){
    sort(a.begin(),a.end());
    bool ans=false;
    for(int i=0;i<a.size();i++){
        int low=i+1;
        int hi=a.size()-1;
      
        while(low<hi){
            int current = a[i]+a[low]+a[hi];
            if(current==sum){
                cout<<"found at positions "<<a[i]<<" "<<a[low]<<" "<<a[hi]<<endl;
                ans=true;
                break;
            }
            else if(current<sum){
                low++;
            }
            else{
                hi--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int>a;
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    
    bool ans = getThreeSumIndices(a,sum);
    if(!ans){
        cout<<"No such Three Elements found!";
    }
    return 0;
}
