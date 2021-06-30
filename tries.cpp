#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define t int 
#define in cin
#define ff vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
struct node{
       char ch;
       bool terminal;
        unordered_map<char,node>children;
       };
struct node* getNewTrieNode()
{
    struct node* nod = new struct node;
    nod->terminal = false;
    return nod;
}
void add(struct node *parent,string word){

       struct node * next=NULL;
   
        if(word.length()==0){
               
               if(!parent->terminal){
                      parent->terminal=true;
               }
               
               return ;
        }


        char b=word[0];
        string ros=word.substr(1);
        struct node *child=next->children[b];
        if(child==NULL){
              child=getNewTrieNode();
              parent->children[b]=child;
              child->terminal=false;
              child->ch=b;
              }
        

     add(child,ros);
}

using namespace std;
int main(){

struct node * runa= getNewTrieNode();
add(runa,"Rohit");

return 0;
}