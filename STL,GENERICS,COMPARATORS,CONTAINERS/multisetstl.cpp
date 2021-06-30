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
multiset<int>m1;
//IN Multiset the similar keys are present and they are present in sorted form 
m1.insert(4);
m1.emplace(4);
m1.emplace(1);


for(auto &p:m1){
    cout<<p<<endl;
}


return 0;
}