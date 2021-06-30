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
vector<int>arr;
int i=0;
void inorder(struct node *root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    arr.push_back(root->data);
    cout<<root->data<<" ";
    inorder(root->right);

}
void inorder_to_bst(struct node * root){
        if(root==NULL){
            return;
        }
        inorder_to_bst(root->left);
        root->data=arr[i];
        i++;
        inorder_to_bst(root->right);
}






int main(){
    struct node * root=buildtree();
    inorder(root);
    sort(arr.begin(),arr.end());
    inorder_to_bst(root);
    inorder(root);
return 0;
}