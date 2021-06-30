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
list<int>first;
first.push_back(10);//Pushing the value from back side by making copy of it(i.e. pass by copy)
first.push_front(20);//pushing the value in front by making a copy of it(i.e. pass by copy)
first.emplace_back(30);//Pushing the value in the list form back side but by using the reference(pass by reference)
first.emplace_front(40);//Pushing the value in the list from front side by using the refrence (pass by reference)
for(list<int>::iterator it=first.begin();it!=first.end();it++){
       cout<<*it<<" ";
}
cout<<endl;
for(auto it=first.begin();it!=first.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
 //Iterator returned by the first.begin() is a bidirectional iterator somay arithmetic operations are not possible
 //only post and pre increment/decrement ,etc are possible and for more information visit the official website  
for(auto el:first){
    cout<<el<<" ";

}
cout<<endl;
for(int &a:first){
    cout<<a<<" ";
}
cout<<endl;


list<int> second(first);
for(int &a:second){
    cout<<a<<" ";
}
cout<<endl;
list<int> third(4,100);
for(int &y:third){
    cout<<y<<" ";
}
cout<<endl;
list<int>fourth(third.begin(),third.end());
fourth.merge(first);
for(int &a:fourth){
    cout<<a<<" ";
}
cout<<endl;
fourth.sort();
for(auto el:fourth){
    cout<<el<<" ";
}
//Adjacency List
int v=5;
vector<list<int>> graph(v);

return 0;
}