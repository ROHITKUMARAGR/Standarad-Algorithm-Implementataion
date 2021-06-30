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
struct vertex{
       float x,y,z;
       vertex(float x1,float y1,float z1){
                 x=x1;
                 y=y1;
                 z=z1;
       }
};
int main(){
  
  vector<vertex> v; //Intialised a vector
  cout<<v.size()<<" "<<v.capacity()<<endl;
  vertex v1(1.2f,3.24f,5.21f);
  v.push_back(v1); 
  cout<<v.size()<<" "<<v.capacity()<<endl;
  for(int a=0;a<10;a++){
      vertex v1(1.2f,3.24f,5.21f);
  v.push_back(v1);             



  
  cout<<v.size()<<" "<<v.capacity()<<endl;


  }

   vector<int>v2(10);//intialising a vector with size 10
   for(int &ab : v2){
       cout<<ab<<" ";
   }
  
  vector<int>v3(10,1);//Initialising the vector with some initila value i.e. 1
  vector<int>v4{4,5,6};//INitialisation of a vector
   int arr[]={1,2,3,4,5};
   vector<int>v6(arr,arr+5);//assiging the data of the array into a vector 






return 0;
}