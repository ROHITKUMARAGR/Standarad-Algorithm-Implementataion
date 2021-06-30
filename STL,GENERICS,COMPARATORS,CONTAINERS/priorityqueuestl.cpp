#include<bits/stdc++.h>
#include<functional>
#define ll long long 
#define pb push_back
#define t int 
#define in cin
#define ff vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct node{
    int x;
    int y;
    node(int a,int b){
        x=a;y=b;
    }
    friend ostream& operator << (ostream &c,A &b);
};
class A{
    int c,d;
    A(int x,int y):c(x),d(y){}
    friend ostream& operator << (ostream &o,A &b){
        cout<<b.c<<" "<<b.d<<endl;
        return o;
    }
};
int main(){
priority_queue<int>qu;
qu.push(10);
qu.push(20);
qu.push(30);
qu.push(40);
priority_queue<int>second(qu);
cout<<second.top()<<endl;
int arr[]={1,8,-8,6,4,7};
priority_queue<int>third(arr,arr+6);
//By adding elements in the priority queue we make a max heap
while(!third.empty()){
    cout<<third.top()<<endl;
    third.pop();
}

//how to make a min heap
//In priority queue we can only delete the topmost element and we cannot delete from anywhere except the top element  
priority_queue<int,vector<int>,greater<int>> pq;
pq.push(40);
pq.push(30);
pq.push(20);
pq.emplace(10);
cout<<pq.top()<<endl;
//try too use priority queue stl with some struct or classes HW
priority_queue<node>nu;
nu.push(node(1,2));
cout<<nu.top()<<endl;

priority_queue<A> ginni;






return 0;
}