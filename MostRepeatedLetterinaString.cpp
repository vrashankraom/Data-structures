#include <bits/stdc++.h>

using namespace std;


int main()
{
        int maxi;

    string s ="k samarth n kamath";
    unordered_map<char,int>mpp;
    
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            mpp[s[i]]++;
            maxi=max(maxi,mpp[s[i]]);
        }
    }
    
    
    for(auto element : mpp){
        if(maxi==element.second)
            cout<<element.first<<" "<<element.second;
    }
    
    return 0;
}
