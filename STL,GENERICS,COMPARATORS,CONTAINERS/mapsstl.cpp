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
map<int,int>arr;
cout<<sizeof(arr)<<endl;
map<char,int>arru;
arru['a']=66;
arru['b']=67;
arru['c']=68;
//In maps the pairs are sorted on the basis of the key value
arru.insert(pair<char,int>('z',69)); 
arru.insert({'d',70}); //This will first make the pair and then pass to the map 
arru.emplace('k',90);//this will directly create an object inside the map and use the pass by reference
for(auto &el:arru){
    cout<<el.first<<" "<<el.second<<endl;
}
arru.erase('c'); //erase tha value from the map by using the key value
arru.erase(arru.begin());//Erase the value by passing the iterator 
// arru.erase(arru.begin()+2); this cannot be done because the iterator returned by the arru.begin() is the bidirectional iterator and 
//these type of iterator only support post increment/decrement and pre increment/decrement and for more info visit the official website
map<char,int>::iterator it;
for(it=arru.begin();it!=arru.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
auto el=arru.lower_bound('b');
cout<<el->second<<endl;
cout<<arru.count('a')<<endl;//This parameter value will always be 1 or 0 because the maps contain unique key,value pair
//if the new pair comes with some old key value then the newer value will update the older key value
cout<<arru.count('c')<<"\n";
if(arru.find('c')==arru.end()){
    cout<<"Not FOund"<<endl;
}else{
    cout<<"Found"<<endl;
}

return 0;
}