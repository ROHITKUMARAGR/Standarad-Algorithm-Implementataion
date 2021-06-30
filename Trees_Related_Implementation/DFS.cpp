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
struct node{
    int data;
    struct node*left=NULL;
    struct node* right=NULL;
    node(int i){
        data=i;
    }
};

 struct node * insert_a_node(struct node * root,int value){
               
               if(root==NULL){
                  struct node * roo=new struct node(value);
                  return roo;
               }

            if(root->data<value){
                root->right=insert_a_node(root->right,value);
            }else{
                if(root->data>value){
                root->left=insert_a_node(root->left,value);
            }
            }
            return root;
 }
 void inorder(struct node* root){
     if(root==NULL){
         return;
     }
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
 }






int main(){

  int i;
  cout<<"Enter the number of nodes u want to keep in the binary search tree"<<endl;
  cin>>i;
  struct node * root=NULL;
  while(i--){
      int a;
      cin>>a;
      root=insert_a_node(root,a);
  }
  
  inorder(root);
   



return 0;
}