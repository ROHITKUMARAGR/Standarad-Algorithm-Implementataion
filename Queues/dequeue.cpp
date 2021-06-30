//Dequeue is an queue in which we can do the insertion/deletion in the front or backward of the queue.
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

 deque<int>arru;
 arru.push_back(1);
 arru.push_front(2);
 cout<<arru.front()<<endl;
 arru.pop_front();
 cout<<arru.front()<<endl;




return 0;
}