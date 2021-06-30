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
string s;
cin>>s;
map<char,int>arr;//map to find the character is visited or not 
stack<char>arru;//stack used to find the lexicographically unique characters string 
map<char,int>arrui;//map to find the last occurence of a number 
int a=0;
//Loop to find the last occurence of the characters in the string
while(s[a]!='\0'){
     arrui[s[a]]=a;
     a++;
}



 int len=s.length();
 arru.push(s[0]);
 arr[s[0]]++;
  a=1;
while(a<len){
    
    if(s[a-1]<s[a]){
        if(arr[s[a]]==0){
             arru.push(s[a]);
             arr[s[a]]++;
        }
       
    }
    else{
        int sig=0;
        while(arru.empty()==false&&s[a]<arru.top()){
       if(arrui[arru.top()]>a){
           arr[arru.top()]--;
           arru.pop();
                }else{
                    break;
                }
        
        
        
        }
        if(arr[s[a]]==0){
        arru.push(s[a]);
        arr[s[a]]++;
        }
    }
    a++;
}

string result;
while(arru.empty()==false){
        result=arru.top()+result;
        arru.pop();
}
cout<<result<<endl;







return 0;
}