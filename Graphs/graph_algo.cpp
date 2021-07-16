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
unordered_map<string,int>arr;
};



void insert_a_vertices(string a,unordered_map<string,node>&r1){
          if(!r1.count(a)){
            node n1;
                r1.insert({a,n1});   
          }else{
            return ;
          }
}

//Adding an edge for an undirected graph
void addedge_undirected_graph(string a,string b,int cost,unordered_map<string,node>&r2){
        if(r2.count(a)){
          r2[a].arr.insert({a,cost});
        }
        if(r2.count(b)){
          r2[b].arr.insert({b,cost});
        }
        return;
}
//Deleting a vertex from the undirected graph
void removevertex(string name,unordered_map<string,node>&r3){
    node n3=r3[name];
    list<string>arrui;
    for(auto it=n3.arr.begin();it!=n3.arr.end();it++){
      arrui.push_back(it->first);
    }
   auto it2=arrui.begin();
   while(it2!=arrui.end()){
       r3[*it2].arr.erase(name);
       it2++;
   }

}


int main(){
unordered_map<string,node>arru;
insert_a_vertices("a",arru);
insert_a_vertices("b",arru);


return 0;
}