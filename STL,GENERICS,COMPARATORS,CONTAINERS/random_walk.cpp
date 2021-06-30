#include<bits/stdc++.h>
#define ll long long 
#define ld long double
#define pb push_back
#define t int 
#define in cin
#define ff vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
ld find_dist(ld x1,ld x2,ld y1,ld y2){
     return sqrtl((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main(){  
int i;
cin>>i;
while(i--){
     int n;
     cin>>n;
     vector<ld>arr(n);
     vector<ld>arru(n);
     for(int a=0;a<n;a++){
         cin>>arr[a]>>arru[a];
     }
     ld qx,rx,qy,ry;
     cin>>qx>>qy>>rx>>ry;
     ld max_dist=find_dist(qx,rx,qy,ry);
     int idx=-1;
     for(int a=0;a<n;a++){
         if(arr[a]==rx&&arru[a]==ry){
             idx=a;
             break;
         }
     }
       if(idx!=-1){
           n--;
           arr.erase(arr.begin()+idx);
           arru.erase(arru.begin()+idx);
       }


     ld perm_count=0.0;
     ld possible_count=0.0;
      vector<ld>permi(n);
      for(ld a=0;a<n;a++){
          permi[a]=a;
      }
       ld ans=0.0;
       cout.precision(8);
     do{
         for(int c=1;c<n;c++){
           ans+=find_dist(arr[permi[c-1]],arr[permi[c]],arru[permi[c-1]],arru[permi[c]]);
         }
         ans+=find_dist(rx,arr[permi[0]],ry,arru[permi[0]]);
         if(ans<=max_dist){ possible_count++;}
         perm_count++;
         ans=0.0;
     }while(next_permutation(permi.begin(),permi.end()));
      ld result=possible_count/perm_count;
      cout<<fixed<<result<<endl;



}

string s="abc";
cout<<next_permutation(s.begin(),s.end());




return 0;
}