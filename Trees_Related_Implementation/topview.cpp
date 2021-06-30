//Implementation of different type of implementation in 
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
map<int,int>arru;
map<int,int>arrui;
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

//Top View
void top_view(struct node * root,int dist){
       if(root==NULL){
           return;
       }
    
      if(arru[dist]==0){
          arru[dist]=root->data;
      }
     
     top_view(root->left,dist-1);
     top_view(root->right,dist+1);

}
//Bottom View
 void bottom_view(struct node * root,int dist){
       if(root==NULL){
           return ;
       }
    
      if(arrui[dist]==0||arrui[dist]!=0){
          arrui[dist]=root->data;
      }
     
     bottom_view(root->left,dist-1);
     bottom_view(root->right,dist+1);

}
//Vertical Order View





int main(){
struct node * root=buildtree();
top_view(root,0);
int max=-1000000;
int min=1000000;
for(auto it=arru.begin();it!=arru.end();it++){
      if(it->first>max){
          max=it->first;
      }
      if(it->first<min){
          min=it->first;
      }
}
cout<<"Top View :"<<endl;
for(int a=min;a<=max;a++){
    cout<<arru[a]<<" ";
}
cout<<endl;
cout<<"Bottom View :"<<endl;

bottom_view(root,0);
 max=-1000000;
 min=1000000;
for(auto it=arrui.begin();it!=arrui.end();it++){
      if(it->first>max){
          max=it->first;
      }
      if(it->first<min){
          min=it->first;
      }
}
for(int a=min;a<=max;a++){
    cout<<arrui[a]<<" ";
}

return 0;
}