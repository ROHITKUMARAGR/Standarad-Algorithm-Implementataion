//This code contains the BFS traversal
// this code also contains the levelorder_levelwise traversal

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
    int data;
    struct node *left=NULL;
    struct node *right=NULL;

    node(int value){
         data=value;
    }
};
//Function to insert a node in BST
node* insert_a_node(struct node * root,int value){
        if(value==-1){
            return NULL;
        }  

          if(root==NULL){
              struct node *roo=new node(value);
              return roo;
          }
   if(root->data<value){
       root->right=insert_a_node(root->right,value);
   }else{
         if(root->data>value){
             root->left=insert_a_node(root->left,value);
         } 
   }

}

//Function to delete a node
node* remove(struct node * root,int value){
     
    if(root==NULL){
        return NULL;
    }

   if(root->data<value){
       root->right=remove(root->right,value);
   }
   if(root->data>value){
       root->left=remove(root->left,value);
   }
   if(root->data==value){
            
            //Leaf Node
            if(root->right==NULL&&root->left==NULL){
                return NULL;
            }
            //Node having LST and not RST
            if(root->left!=NULL&&root->right==NULL){
                struct node *temp=root->left;
                root->left=NULL;
                return temp;    //aisa logic hain ki recursively pichle waale node ko aage waale node jisse connect hona hain hm wahi 
                                 // direct wahi pass kr de rhe h 
            }
           
           //Node having the RST and not LST

           if(root->left==NULL&&root->right!=NULL){
               struct node *temp=root->right;
                root->right=NULL;
                return temp;
                }
            //Node having the both LST and RST 
            if(root->left!=NULL&&root->right!=NULL){
                     struct node *nextbig=root->right;
                     while(nextbig->left!=NULL){
                         nextbig=nextbig->left;
                     }
                     root->data=nextbig->data;
                     root->right=remove(root->right,nextbig->data);
                     return root;
                     }    

}  

}
//BFS traversal of the tree
void levelorder_BFS_Traversal(struct node * root){
    if(root==NULL){
        return;
    }
    queue<node*>arru;
    arru.push(root);
    while(arru.empty()==false){
        struct node *runa=arru.front();
        cout<<runa->data<<" ";
        if(runa->left!=NULL){
            arru.push(runa->left);
        }
        if(runa->right!=NULL){
            arru.push(runa->right);
        }
        arru.pop();
        
    }      
           
}
//level order and level wise traversal
void levelorder_Levelwise_Traversal(struct node * root){
    
    
    if(root==NULL){
        return;
    }

    struct node * runi=NULL;
    queue<node*>arru;
    arru.push(root);
    int count=0;
    while(arru.empty()==false){
        int count=arru.size();
        
        while(count--){
         struct node *runa=arru.front();
         cout<<runa->data<<" ";
        if(runa->left!=NULL){
            arru.push(runa->left);
        }
        if(runa->right!=NULL){
            arru.push(runa->right);
        }
        arru.pop();
        }
        cout<<endl;
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
levelorder_BFS_Traversal(root);
cout<<endl;
levelorder_Levelwise_Traversal(root);

return 0;
}