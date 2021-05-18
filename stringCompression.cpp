class Solution {
public:
    int compress(vector<char>& chars) {
        //index keeps track of elements in compressed string
        int index=0;
        int i=0;
        
        //we keep i in one position 
        while(i<chars.size()){
            int j=i;
        
        //move j until ith and jth elements are same
        while(j<chars.size() && chars[i]==chars[j]){
            j++;
        }
        //first store the element in the compressed string
        chars[index++]=chars[i];
        //now we store the count in the compresse string
        if(j-i>1){
            int c=j-i;
            string count=to_string(c);
            //suppose count is two or three digits
            for(int k=0;k<count.size();k++){
                chars[index++]=count[k];
            }
        }
            //bring i to jth location
            i=j;
      }
        return index;
    }
};
