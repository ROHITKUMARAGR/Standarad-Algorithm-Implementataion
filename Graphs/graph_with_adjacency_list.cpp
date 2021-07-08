#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(n) n.begin(),n.end() 
#define vec vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void printing(vector<list<int>>arru){
   for(int a=0;a<arru.size();a++){
       cout<<a+1<<"->";
       auto it=arru[a].begin();
       while(it!=arru[a].end()){
           auto it2=it;
           string end="->";
           if(++it2==arru[a].end()){
            end=".";
           }
           cout<<*it<<end<<" ";
           it++;
       }
       cout<<endl;
   }
}

int main(){
cout<<"Enter the no. of vertices u want to keep in the graph"<<endl;
int i;
cin>>i;
vector<list<int>>arru(i); //Adjacenecy List
for(int a=0;a<i;a++){
    int j;
    cout<<"Number of vertices connected with "<<a+1<<" vertex"<<endl;
    cin>>j;
    while(j--){
        int d;
        cin>>d;
        arru[a].push_back(d);
    }

}

printing(arru);


return 0;
}