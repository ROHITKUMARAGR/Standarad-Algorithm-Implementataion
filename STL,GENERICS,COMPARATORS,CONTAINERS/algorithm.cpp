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
std::vector<int> v{4,3,1,2,5};
std::sort(v.begin(),v.end()); //Contianer passed in this should return a random acces iterator if required 
//Unstable Sort 
//Intro sort ->hybrid(insertion sort,quick sort ,heap sort);
for(int a:v){
    cout<<a<<" ";
}
std::cout<<endl;

std::vector<int> v1{4,3,1,2,5};
std::stable_sort(v1.begin(),v1.end()); //this is a stable sort i.e. maintaining the relative ordering of the elements
for(int a:v1){
    cout<<a<<" ";
}
std::cout<<endl;
//This is a partial sort it only sorts the partial part of the vector
std::vector<int> v2{4,3,1,2,5};
std::partial_sort(v2.begin(),v2.begin()+3,v2.end()); 
for(int a:v){
    cout<<a<<" ";
}

cout<<is_sorted(v1.begin(),v1.end())<<endl; //Checks that the array or vector is sorted or not 
vector<int>b(v.size()+v1.size());
merge(v.begin(),v.end(),v1.begin(),v1.end(),b.begin());  //This is used to merge the two sorted array
for(int d:b){
    cout<<d<<" ";
}

reverse(b.begin(),b.end());//Used to reverse the vector b

return 0;
}