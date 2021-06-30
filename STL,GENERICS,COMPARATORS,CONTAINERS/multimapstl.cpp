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
multimap<char,int> m1;
m1.insert({'a',55});
m1.insert({'a',56});
m1.insert({'a',57});
m1.insert({'a',58});
m1.insert({'a',59});
// All the operations are performed in o(logN) time.
//This will contain all the similar keys in the maps and these values are stored in BBST
//and the multimap will be sorted on the basis of keys values
for(auto &b:m1){
    cout<<b.first<<" "<<b.second<<endl;
}


return 0;
}