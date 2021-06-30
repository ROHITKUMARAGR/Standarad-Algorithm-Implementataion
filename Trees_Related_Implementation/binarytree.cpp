// We input the entries on based on the nodes will have children or not 
//If the children is not having the children node then it is represented by -1

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
node* buildtree(){
    int i;
    cin>>i;
    if(i==-1){
        return NULL;
    }else{
     struct node *root=new node(i);
     root->left=buildtree();
     root->right=buildtree();
     return root;
          }
}
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
int count_no_of_nodes(struct node *root){
     //Base case
     if(root==NULL){
         return 0;
     }
   //Recursive task
   int c1=count_no_of_nodes(root->left);
   int c2=count_no_of_nodes(root->right);
   
   //self work
   return c1+c2+1;
}


int height_of_node(struct node * root){
          if(root==NULL){
              return 0;
          }
  int c1=height_of_node(root->left);
  int c2=height_of_node(root->right);
  if(c1>c2){
      return c1+1;
  }else{
     return c2+1;
     }


}





//Inserting a node for the binary search tree
void insert_a_node(struct node *root,int value){
     if(root->data<value){
         if(root->right==NULL){
              struct node *roo=new node(value);
              root->right=roo;
              return;
         }else{
         insert_a_node(root->right,value);
         }
     }
     else{
          if(root->left==NULL){
              struct node *roor=new node(value);
              root->left=roor;
              return;
          }else{
                insert_a_node(root->left,value);
          }
     }

}




int main(){

struct node *root=buildtree();


cout<<endl;
preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
postorder(root);
cout<<endl;
cout<<count_no_of_nodes(root)<<endl;
cout<<height_of_node(root)-1<<endl;

return 0;
}


