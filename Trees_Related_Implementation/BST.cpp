//Implementation of biinary search tree
#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define t int 
#define in cin
#define ff vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct node {
    int data=-1;
    struct node * left=NULL;
    struct node * right=NULL;

   node(int dat){
       data=dat;
    }
};
void preorder(struct node *root){
            if(root==NULL){
                return ;
            }
       cout<<root->data<<" ";
       preorder(root->left);
       preorder(root->right);        
}
void inorder(struct node *root){
            if(root==NULL){
                return ;
            }
       
       inorder(root->left);
       cout<<root->data<<" ";
       inorder(root->right);        
}

void postorder(struct node *root){
            if(root==NULL){
                return ;
            }
       
       postorder(root->left);
       postorder(root->right);
       cout<<root->data<<" ";        
}
node* insert_a_node(struct node *root,int value){

    if(value==-1){
        return NULL;
    }
       
    if(root==NULL){
            struct node *roo=new node(value);
            return roo;
        }

     if(root->data<value){
         root->right=insert_a_node(root->right,value);
         
     }
     else{
         root->left=insert_a_node(root->left,value);
          
     }
}


node* delete_a_node(struct node * root,int value){
        if(root==NULL){
            return NULL;
        }
       if(root->data<value){
           root->right=delete_a_node(root->right,value);
          // return root;
       }else{
              if(root->data>value){
                  root->left=delete_a_node(root->left,value);
                 // return root;
              }
              else{
                  if(root->data==value){
                      if(root->left==NULL&&root->right==NULL){
                          return NULL;
                      }
                      if(root->left!=NULL&&root->right==NULL){
                         struct node *temp=root->left;
                         root->left=NULL;
                         return temp;
                      }
                      if(root->left==NULL&&root->right!=NULL){
                          struct node *tempa=root->right;
                          root->right=NULL;
                          return tempa;
                      }
                      if(root->left!=NULL&&root->right!=NULL){
                            struct node *nextbig=root->right;
                            while(nextbig->left!=NULL){
                                nextbig=nextbig->left;
                            }
                           root->data=nextbig->data;
                           root->right=delete_a_node(root->right,nextbig->data); 
                           return root;   
                      }


                  }


              }
       }





}




int main(){

int i;
struct node *root=NULL;
cout<<"Enter the number of nodes you want to insert in the binarysearch tree"<<endl;
cin>>i;
while(i--){
    int value;
    cin>>value;
    root=insert_a_node(root,value);
}

preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
postorder(root);
cout<<endl;


root=delete_a_node(root,5);
//root=delete_a_node(root,6);
//root=delete_a_node(root,0);
preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
postorder(root);
cout<<endl;

return 0;
}