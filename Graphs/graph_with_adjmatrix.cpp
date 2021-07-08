#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(n) n.begin(),n.end() 
#define vec vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
cout<<"Enter the number of vertices u want in the graphs"<<endl;
int i;
cin>>i;
int arr[i][i];
cout<<"Enter the value of the adjacency matrix"<<endl;
for(int a=0;a<i;a++){
    for(int b=0;b<i;b++){
        cin>>arr[a][b];
    }
}
//graph implementation with the help of adjacenecy matrix is very much useful in the
//cases where we need to check that any two vertices are connected with each other 
return 0;
}