#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l;
    int h;
    int start=0;
    int end=1;

    for(int i=1;i<s.length();i++){
        
        //For Even Palindrome string
        l=i-1;
        h=i;
        
        while(l>=0 && h<s.length() &&s[l]==s[h]){
            if(h-l+1>end){
                start=l;
                end=h-l+1;
            }
            l--;
            h++;
        }
        
        //For Odd Palindrome string
        l=i-1;
        h=i+1;
        while(l>=0 && h<s.length() &&s[l]==s[h]){
            if(h-l+1>end){
                start=l;
                end=h-l+1;
            }
            l--;
            h++;
        }
    }
    for(int i=start;i<=start+end-1;i++){
        cout<<s[i]<<" ";
    }

    return 0;
}
