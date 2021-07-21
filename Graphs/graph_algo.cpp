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
          r2[a].arr.insert({b,cost});
        }
        if(r2.count(b)){
          r2[b].arr.insert({a,cost});
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
//Deleting an edge from the graph
void removeEdge(string name1,string name2,unordered_map<string,node>&r3){
       bool ab=r3.count(name1);
       bool bc=r3.count(name2);
       if(ab==false||bc==false||!r3[name1].arr.count(name2)){
          return;
       }
       r3[name1].arr.erase(name2);
       r3[name2].arr.erase(name1);

}



void display(unordered_map<string,node>&ar){
   auto it=ar.begin();
   while(it!=ar.end()){
     cout<<it->first<<" => ";
     cout<<endl;
     auto it2=ar[it->first].arr.begin();
     while(it2!=ar[it->first].arr.end()){
       cout<<it2->first<<" "<<it2->second;
       cout<<endl;
       it2++; 
     }
     cout<<endl;
     it++;
   }
}
//recursive implementation of DFS Traversal
void DFS_recursive(string a,unordered_map<string,node>&r5,unordered_map<string,bool>&r6){
              cout<<a<<endl;
              r6[a]=true;
              for(auto it=r5[a].arr.begin();it!=r5[a].arr.end();it++){
                      if(!r6[it->first]){
                        DFS_recursive(it->first,r5,r6);
                      }
              }
              return;
}



//DFS traversal using the stack
void DFS(string a,int size,unordered_map<string,node>&r4){
    unordered_map<string,bool>arrui;
    for(auto it2=r4.begin();it2!=r4.end();it2++){
         arrui.insert({it2->first,false});
    }
    stack<string>arru;
    arru.push(a);
    arrui[a]=true;
    while(!arru.empty()){
       a=arru.top();
      cout<<a<<endl;
      arru.pop();
      for(auto it=r4[a].arr.begin();it!=r4[a].arr.end();it++){
          if(!arrui[it->first]){
              arru.push(it->first);
              arrui[it->first]=true;
          }
      }
    }
}

void BFS(string a,int size,unordered_map<string,node>&r4){
    unordered_map<string,bool>arrui;
    for(auto it2=r4.begin();it2!=r4.end();it2++){
         arrui.insert({it2->first,false});
    }
    queue<string>arru;
    arru.push(a);
    arrui[a]=true;
    while(!arru.empty()){
       a=arru.front();
      cout<<a<<endl;
      arru.pop();
      for(auto it=r4[a].arr.begin();it!=r4[a].arr.end();it++){
          if(!arrui[it->first]){
              arru.push(it->first);
              arrui[it->first]=true;
          }
      }
    }
}

bool isConnected(unordered_map<string,node>&r4,string a,unordered_map<string,bool>arrui){
    queue<string>arru;
    arru.push(a);
    arrui[a]=true;
    while(!arru.empty()){
       a=arru.front();
      cout<<a<<endl;
      arru.pop();
      for(auto it=r4[a].arr.begin();it!=r4[a].arr.end();it++){
          if(!arrui[it->first]){
              arru.push(it->first);
              arrui[it->first]=true;
          }
      }
    }
    for(auto it=arrui.begin();it!=arrui.end();it++){
         if(it->second==false){
           return false;
         }
    }
    return true;



}


void print_no_of_CC(unordered_map<string,node>&r4,string a,unordered_map<string,bool>&arrui){
  queue<string>arru;
    arru.push(a);
    arrui[a]=true;
    while(!arru.empty()){
       a=arru.front();
      cout<<a<<" ";
      arru.pop();
      for(auto it=r4[a].arr.begin();it!=r4[a].arr.end();it++){
          if(!arrui[it->first]){
              arru.push(it->first);
              arrui[it->first]=true;
          }
      }
    }
    cout<<endl;

    for(auto it=arrui.begin();it!=arrui.end();it++){
         if(it->second==false){
           print_no_of_CC(r4,it->first,arrui);
         }
    }
  return;
}


bool IsCycle(unordered_map<string,node>&r4,string a){
   unordered_map<string,bool>arrui;
    for(auto it2=r4.begin();it2!=r4.end();it2++){
         arrui.insert({it2->first,false});
    }
    queue<string>arru;
    arru.push(a);
    arrui[a]=true;
    while(!arru.empty()){
       a=arru.front();
      cout<<a<<endl;
      arru.pop();
      for(auto it=r4[a].arr.begin();it!=r4[a].arr.end();it++){
          if(!arrui[it->first]){
              arru.push(it->first);
              arrui[it->first]=true;
          }else{
            return true;
          }
      }
    }
  
}



int main(){
unordered_map<string,node>arru;
insert_a_vertices("a",arru);
insert_a_vertices("b",arru);
insert_a_vertices("c",arru);
insert_a_vertices("d",arru);
insert_a_vertices("e",arru);
insert_a_vertices("f",arru);
addedge_undirected_graph("a","b",5,arru);
addedge_undirected_graph("a","c",6,arru);
addedge_undirected_graph("c","d",7,arru);
addedge_undirected_graph("b","d",9,arru);
addedge_undirected_graph("e","f",9,arru);
display(arru);
cout<<"DFS=>"<<endl;
DFS("e",5,arru);
unordered_map<string,bool>arrui;
    for(auto it2=arru.begin();it2!=arru.end();it2++){
         arrui.insert({it2->first,false});
    }
 cout<<"DFS recursive=>"<<endl;
 DFS_recursive("e",arru,arrui);
 cout<<"BFS=>"<<endl;
 BFS("e",5,arru);  
 for(auto it2=arrui.begin();it2!=arrui.end();it2++){
        it2->second=false;
    } 
if(isConnected(arru,"a",arrui)){
   cout<<"Its all connected"<<endl;
}else{
  cout<<"Its somewere disconnectd"<<endl;
}
for(auto it2=arrui.begin();it2!=arrui.end();it2++){
        it2->second=false;
    }
cout<<"No. of Connected Components"<<endl;
print_no_of_CC(arru,"a",arrui);



return 0;
}