//To find the first non repeating character in the given string
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
cout<<"Enter the string"<<endl;
string s;
cin>>s;
map<char,int>arru;
queue<char>arrui;
int a=0;
while(s[a]!='\0'){
        arru[s[a]]++;
       if(arru[s[a]]==1){
           arrui.push(s[a]);
       }else{
            while(arru[arrui.front()]>1){
                arrui.pop();
            }
       }
       a++;
}

if(arrui.empty()==false){
    cout<<arrui.front()<<endl;
}else{
    cout<<"No value is no repeating in the given string"<<endl;
}




return 0;
}