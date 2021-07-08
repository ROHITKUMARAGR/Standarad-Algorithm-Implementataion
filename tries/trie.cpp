#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(n) n.begin(),n.end() 
#define vec vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class node{
    public:
    char ch;
    bool isterminal;
    unordered_map<char,node*> children;
    node(char ch){
        this->ch=ch;
        isterminal=false;
    }
};

class trie{
    public:
       node *root;
      trie(){
          this->root=new node('\0');
      }
     void insert_a_string(string s){
         node *temp=root;
         for(int a=0;a<s.size();a++){
               char ch= s[a];
               if(temp->children.count(ch)){ // the character is present in the trie as children node
                     temp=temp->children[ch];
               }else{
                       node *n=new node(ch);
                       temp->children[ch]=n;
                       temp=n;
               }
         }
         temp->isterminal=true;
         return;
     }


     bool search(string s){
         node *temp=root;
         for(int a=0;a<s.size();a++){
            char ch=s[a];
            if(temp->children.count(ch)){
                temp=temp->children[ch];
            }else{
                return false;
            }
         }
         return temp->isterminal;
     }

     void dfs(node *runa,string pre,string output){
          if(runa==NULL) return;
          if(runa->isterminal) cout<<pre+output<<endl;
          for(auto ch:runa->children){
              dfs(ch.second,pre,output+ch.first);
          }
     }


     void print_the_strings_with_prefix(string a){
              node * temp1=root;
              for(int b=0;b<a.size();b++){
                  if(temp1->children.count(a[b])){
                      temp1=temp1->children[a[b]];
                  }else{
                      return;
                  }
              }
              dfs(temp1,a,"");
     }




};
int main(){
trie t1;
t1.insert_a_string("rohit");
t1.insert_a_string("kumar");
cout<<t1.search("kumar")<<endl;
cout<<t1.search("risho")<<endl;



return 0;
}