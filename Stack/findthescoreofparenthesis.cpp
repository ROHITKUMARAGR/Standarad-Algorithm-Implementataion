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
stack<int>arr;
arr.push(0);
string s;
cin>>s;
int a=0;
int v=1;
while(s[a]!='\0'){
    if(s[a]=='('||s[a]=='{'||s[a]=='['){
        arr.push(0);
    }
    else{
        
        int b=arr.top();
        if(b==0){
            v=1;
        }else{
            v=2*v;
        }
        arr.pop();
        if(arr.top()==0){
            arr.pop();
            arr.push(v);
        }else{
            int sum=arr.top();
            sum+=v;
            arr.pop();
            arr.push(sum);
        }

    }
a++;

}
cout<<arr.top()<<endl;



return 0;
}