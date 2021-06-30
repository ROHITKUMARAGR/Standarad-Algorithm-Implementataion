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
int a,b;
cin>>a>>b;
string gun;
cin>>gun;
set<char>arru;
for(int c=0;c<b;c++){
    char d;
    cin>>d;
    arru.emplace(d);
}
long long int total=0;
long long int count=0;
for(int e=0;e<a;e++){
    int f=binary_search(arru.begin(),arru.end(),gun[e]);
    if(f==1){
        count+=1;
        }else{
            total=total+(((count+(long long )1)*count)/(long long int)2);
            count=0;
        }

}
total=total+(((count+(long long )1)*count)/(long long int)2);
cout<<total<<endl;


return 0;
}