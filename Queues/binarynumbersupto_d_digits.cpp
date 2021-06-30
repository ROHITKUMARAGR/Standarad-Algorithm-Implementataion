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
cout<<"Enter the value d upto which u want to get the binary numbers"<<endl;
int d;
cin>>d;
queue<int>arru;
int count=pow(2,d);
int a=1;
arru.push(1);
cout<<"0"<<endl;
while(a!=count){
       cout<<arru.front()<<endl;
       int first=arru.front()*10;
       arru.push(first);
       int second=first+1;
       arru.push(second);
       a++;
       arru.pop();

}



return 0;
}