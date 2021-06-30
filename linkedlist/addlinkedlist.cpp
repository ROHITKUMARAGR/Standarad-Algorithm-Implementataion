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

    int key;
    struct node * next=NULL;
    struct node * prev=NULL;//Code to promote doubly linked list if disable this line it will get converted to singly linked list
};
struct node * create_a_linkedlist(int i){
    struct node * first=NULL;
    struct node * trav=NULL;

   while(i--){
       cout<<"Enter the values of the node one by one"<<endl;
       struct node * point=(struct node *)malloc(sizeof(struct node));
        if(first==NULL){
            first=point;
            trav=first;
            cin>>first->key;
            trav->next->prev=point; //disabling this line will make the doubly LL to singly LL
        }else{ 
               trav->next->prev=trav; //Disabling this line will make the doubly LL to singly LL
               trav->next=point;
               trav=trav->next;
               cin>>trav->key;
        }
   }
return first;
}

struct node * create_a_node_add_on_to_the_head(struct node *head){
       
       struct node *point=(struct node*)malloc(sizeof(struct node));
       point->next=head;
       head->prev=point;
       head=point;
       return point;
}



void create_a_node_add_on_to_the_tail(struct node * head){
      struct node *trav=head;
      while(trav->next==NULL){
          trav=trav->next;
      }
      struct node *point=(struct node*)malloc(sizeof(struct node));
      point->prev=trav;
      trav->next=point;
}

void display_the_LL(struct node * head){
     while(head==NULL){
         cout<<head->key<<"->";
         head=head->next;
     }


}






int main(){
   
   cout<<"Enter the length of the number of different entries"<<endl;
   int i;
   cin>>i;
   struct node * first[i];
   for(int a=0;a<i;a++){
   first[a]=create_a_linkedlist(i);
   }
   
   
   
   


  

 



return 0;
}