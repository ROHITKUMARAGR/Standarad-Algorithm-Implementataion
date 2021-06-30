//STL implementation of stacks 
#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define ff vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
     stack<int>s;
     deque<int>deq{1,2,3,4,5};
     int n;
     cin>>n;
     while(n--){
     int x;
     cin>>x;
     s.emplace(x); //s.emplace :-this will pass the value by reference 
    }
     cout<<s.top()<<endl;
     s.pop();
     s.pop();
     cout<<s.top()<<endl;
     stack<int>arru(deq);//Here we can only assign the dequeue and 


     return 0;
}