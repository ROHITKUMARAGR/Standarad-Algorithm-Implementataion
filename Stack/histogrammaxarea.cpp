//Code to find the maximum area in histogram
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
int i;
cout<<"Enter the length of the heights of the histogram"<<endl;
cin>>i;
int arr[i];
stack<int>arru;
cout<<"Enter the heights of the histogram"<<endl;
for(int a=0;a<i;a++){
    cin>>arr[a];
}
int maxarea=arr[0];
arru.emplace(0);
int count=1;
for(int a=1;a<i;a++){
        if(arr[a]>arr[arru.top()]){
            arru.emplace(a);
        }else{
            while(arru.empty()!=true||arr[arru.top()]>arr[a]){
                      arru.pop();
            }
            arru.emplace(a);
        }
    




}







return 0;
}