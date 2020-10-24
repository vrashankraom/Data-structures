
//we use vectors here and push back all the words.then print all the words int reverse
#include <bits/stdc++.h> 
using namespace std; 

int main(){
    
    vector<string>temp;
    string s="hello.man.im.vrashank";
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]== '.'){
            temp.push_back(str);
            str="";
        }
        
        else{
            str=str+s[i];
        }
    }
   temp.push_back(str);
    for(int i=temp.size()-1;i>0;i--){
        cout<<temp[i]<<".";
    }
    cout<<temp[0];
    
    
    return 0;
}
