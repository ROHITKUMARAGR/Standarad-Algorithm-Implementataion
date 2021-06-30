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
vector<int>v;


for(int i=0;i<5;i++){
v.emplace_back(i);
}
cout<<v.front()<<" "<<v.back()<<endl;
cout<<v.at(1)<<endl;//throws exceptions
cout<<v[1]<<endl;//never throws run time exception and its behaviour is undefined 
cout<<v.size()<<" "<<v.capacity()<<" "<<v.max_size()<<endl;



for(int a :v){
    cout<<a<<" ";
}
cout<<endl;
for(auto a:v){
    cout<<a<<" ";

}
cout<<endl;

cout<<v.empty()<<endl;
//v.clear();//this will just delete the elements stored in the container and the capacity will remain the same.
cout<<v.size()<<" "<<v.capacity()<<endl; 

vector<int>::iterator it=v.begin();
cout<<*it<<endl;
it=v.end();//this will point to the random position 
cout<<*it<<endl;

for(it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
cout<<*(v.end()-1)<<endl;
//erase expects an iterators
v.erase(v.begin()+2);
for(it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
//range delete  from [first,last)
v.erase(v.begin(),v.begin()+2);
for(it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
v.pop_back();//removes the elements from the back side of the vector in o(1) time.

vector<int>v1{1,2,3,4,5};
vector<int>v2{1,5,5,5,5};
cout<<(v1==v2)<<endl;
vector<int>v3(5,1);
cout<<(v3==vector<int>(5,1))<<endl;

auto i=v3.insert(v3.begin()+1,2);//insert functions insert the values inbetween the vectors and the insert function takes iterator as an argument and the 
//the insert function will return the intertaor pointing to the inserted value.
for(int a:v3){
    cout<<a<<" ";
}
cout<<endl;


return 0;
}