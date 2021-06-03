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

node* buildBST(node* root,int data){
    if(root==NULL){
        return new node(data);
    }
    else if(data<root->data){
        root->left = buildBST(root->left,data);
    }
    else{
        root->right = buildBST(root->right,data);
    }
    return root;
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
void printInOrder(node* root){
    if(root==NULL){
        return;
    }
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}
void printPostOrder(node* root){
    if(root==NULL){
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}
void printPreOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPostOrder(root->left);
    printPostOrder(root->right);
    
}

int main()
{
    node* root =NULL;
    for(int i=0;i<10;i++){
        int d;
        cin>>d;
        root = buildBST(root,d);
    }
    
    printLevelOrderNormal(root);
    cout<<endl<<endl;
    printLevelOrderTreeFashion(root);
    cout<<endl<<endl;
    printInOrder(root);
    cout<<endl<<endl;
    printPostOrder(root);
    cout<<endl<<endl;
    printPreOrder(root);
    return 0;
}
