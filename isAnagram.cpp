#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s1,string s2){
    if(s1.size()!=s2.size())
        return false;
    
    for(int i=0;i<s1.size();i++){
        s1[i]=tolower(s1[i]);
    }
    for(int i=0;i<s2.size();i++){
        s2[i]=tolower(s2[i]);
    }
    
    unordered_map<char,int>mpp;
    
    for(char it:s1){
        mpp[it]++;
    }
    for(char it:s2){
        mpp[it]--;
    }
    
    for(auto i:mpp){
        if(i.second!=0){
            return false;
        }
    }
    return true;
    
}


int main()
{
    string s1;
    string s2;
    
    cin>>s1;
    cin>>s2;
    
    cout<<isAnagram(s1,s2);
    return 0;
}
