
#include <bits/stdc++.h>

using namespace std;

class node{
    public:
          int data;
          node* left;
          node* right;
          
          node(int d){
              data=d;
              left=NULL;
              right=NULL;
          }
};

node* buildTree(){
    int d;
    cin>>d;
    
    if(d==-1){
        return NULL;
    }
    
    node* temp = new node(d);
    temp->left = buildTree();
    temp->right = buildTree();
    return temp;
}

void printLevelOrderNormal(node* root){
    queue<node*>q;
    q.push(root);
    
    
    while(!q.empty()){
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        
    }
}
void printLevelOrderTreeFashion(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        
        }
}
}


int main()
{
    node* root = buildTree();
    printLevelOrderNormal(root);
    cout<<endl<<endl;
    printLevelOrderTreeFashion(root);
    return 0;
}
