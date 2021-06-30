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
int n;
cin>>n;
int arr[n];
for(int a=0;a<n;a++){
    cin>>arr[a];
}
vector<int>arru;
vector<int>arrui;
for(int a=0;a<n;a++){
    for(int b=0;b<n;b++){
        for(int c=0;c<n;c++){
            arru.push_back(arr[a]*arr[b]+arr[c]);
        }
    }
}


for(int d=0;d<n;d++){
    for(int e=0;e<n;e++){
        for(int f=0;f<n;f++){
            if(arr[d]==0)continue;
            arru.push_back((arr[f]+arr[e])*arr[d]);
        }
    }
}
sort(arru.begin(),arru.end());
sort(arrui.begin(),arrui.end());
ll ans=0;
for(int c=0;c<arru.size();c++){
   int li=lower_bound(arrui.begin(),arrui.end(),arru[c])-arrui.begin();
   int ri=upper_bound(arrui.begin(),arrui.end(),arru[c])-arrui.begin();
  ans+=(ri-li);
}
cout<<ans<<endl;

return 0;
}