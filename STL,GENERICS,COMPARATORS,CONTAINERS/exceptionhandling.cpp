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
 int x,y;
         cin>>x>>y;
//A a;
try{
    //a.canGrow();
    
         int z=x/y;
         cout<<z<<endl;
}catch(exception &e){
    cout<<e.what()<<endl;
    cout<<"Saved life"<<endl;
}

return 0;
}