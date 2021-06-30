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
int main(){
set<int> s;
s.insert(5);
s.emplace(20);
for(auto &i:s){
    cout<<i<<endl;
}
unordered_set<int> s1;
s1.insert(5);
s1.emplace(20);
for(auto &j:s1){
    cout<<j<<endl;
}



return 0;
}