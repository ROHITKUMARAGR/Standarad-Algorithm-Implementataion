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
     queue<int>s;  //queue<int,conatinertype> //If we dont specify the container for the particular data structure to be implemented then
                   //the standard container will be used instead of it.
     deque<int>deq{1,2,3,4,5};
     vector<int>arru{1,2,3,4,5,6,7,8,9};
     int n;
     cin>>n;
     while(n--){
     int x;
     cin>>x;
     s.emplace(x); //s.emplace :-this will pass the value by reference 
    }
     cout<<s.front()<<endl;
     s.pop();
     s.pop();
     cout<<s.front()<<endl;
     queue<int>arru(deq);//Here we can only assign the dequeue and 
     stack<int,vector<int>>arrui(arru); //IN this stack intialisation we have specified the container type also thats why the arru vector assignment is possible
                                        //the data structure assigned in the brackets() should be same as the specified /standard  data structure of container. 

     return 0;
}