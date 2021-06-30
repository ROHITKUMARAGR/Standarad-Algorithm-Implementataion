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
//WE have  wrote our own hash map fot the unordered map
struct hash_pair{
    template<class T1,class T2>
    size_t operator()(const pair<T1,T2> &p) const{
            auto h1=hash<T1>(p.first);
            auto h2=hash<T2>(p.second);
            return h1^h2;
    }
};
int main(){
unordered_map<int,int>arr;
cout<<sizeof(arr)<<endl;
unordered_map<char,int>arru;
arru['a']=66;
arru['b']=67;
arru['c']=68;
//In unordered maps the pairs are in random order.
arru.insert(pair<char,int>('z',69)); 
arru.insert({'d',70}); //This will first make the pair and then pass to the map 
arru.emplace('m',90);//this will directly create an object inside the map and use the pass by reference
for(auto &el:arru){
    cout<<el.first<<" "<<el.second<<endl;
}
arru.erase('c'); //erase tha value from the map by using the key value
arru.erase(arru.begin());//Erase the value by passing the iterator 
// arru.erase(arru.begin()+2); this cannot be done because the iterator returned by the arru.begin() is the bidirectional iterator and 
//these type of iterator only support post increment/decrement and pre increment/decrement and for more info visit the official website
unordered_map<char,int>::iterator it;
for(it=arru.begin();it!=arru.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
cout<<arru.count('a')<<endl;//This parameter value will always be 1 or 0 because the maps contain unique key,value pair
//if the new pair comes with some old key value then the newer value will update the older key value
cout<<arru.count('c')<<"\n";
if(arru.find('c')==arru.end()){
    cout<<"Not FOund"<<endl;
}else{
    cout<<"Found"<<endl;
}


unordered_map<pair<int,int>,int,hash_pair> mp;

cout<<"*********************"<<endl;
unordered_map<char,int>::iterator it1;
for(it1=arru.begin();it1!=arru.end();it1++){
    if(it1->first=='a'){
        arru.erase(it1);
    }
}
for(auto &p : arru){
    if(p.first=='m'){
        arru.erase(p.first);
    }
}

for(auto &h : arru){
    cout<<h.first<<" "<<h.second<<endl;
}




return 0;
}