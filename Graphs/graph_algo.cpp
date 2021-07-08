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
          node n1;
          r1.insert({a,n1});
}
int main(){
unordered_map<string,node>arru;
insert_a_vertices("a",arru);
for(auto it=arru.begin();it!=arru.end();it++){
  node &n2=it->second;
    for(auto it2=n2.begin();it2!=n2.end();it2++){

    }
}

return 0;
}