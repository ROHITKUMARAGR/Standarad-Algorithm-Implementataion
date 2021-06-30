//This implementation of the binary tre is the self adjusting tree
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
void buildtree(struct node *root,int value){
         if(root==NULL){
            
             return;
         }
      if(root->data<value){
          buildtree(root->right,value);
      }else{
          buildtree(root->left,value);
      }



}


int main(){




return 0;
}