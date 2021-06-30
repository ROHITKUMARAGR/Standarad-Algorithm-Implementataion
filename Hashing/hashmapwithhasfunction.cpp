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
class node{
public:
    string key;
    ll value;
    node *next=NULL;
     node(node obj,string key,int value){
       obj.key=key;
       obj.value=value;
     }



};
class HashTable{
public:
    ll cs=0;
    ll ts=1;
    ll arr[];
    HashTable(HashTable obj,int ts){
         obj.ts=ts;
         obj.arr[ts]={-1};
    }
    ll Hash_Function(HashTable obj,string key){
            ll sum=0;
            ll factor=1;
            ll a=0;
            while(key[a]!='\0'){
                sum=((sum%obj.ts)+((((int)key[a])%obj.ts)*(factor%obj.ts)))%obj.ts;
                factor=((factor%obj.ts)*(11%obj.ts))%obj.ts;
                a++;
            }
            return sum;
    }



    void insert(HashTable obj,string key,ll value){
          int bi=obj.Hash_Function(,key);

    }

    
          
};


int main(){



return 0;
}