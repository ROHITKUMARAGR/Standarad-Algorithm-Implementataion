//code to fid the tilt of the binary tree
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

int tilt=0;
int tilt_count(struct node * root){
      if(root==NULL){
          return 0;
      }
   int c1=tilt_count(root->left);
   int c2=tilt_count(root->right);
   tilt+=abs(c1-c2);

   return c1+c2+root->data;


}


int main(){
struct node *root=buildtree();
tilt_count(root);
cout<<tilt<<endl;

return 0;
}