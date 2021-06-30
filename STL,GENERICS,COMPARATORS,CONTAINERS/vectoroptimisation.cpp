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
       vertex(){}
       vertex(float x1,float y1,float z1){
                 x=x1;
                 y=y1;
                 z=z1;
       }
      //Copy Constructor 
       vertex (const vertex &v) : x(v.x) ,y(v.y),z(v.z){
           cout<<"Copied!"<<endl;
       }

};
int main(){
    vector<vertex>v1;
    v1.reserve(3); // this mainly allocates the space size of three and the vector is empty and it does not contain the random values
    //the above syntax avoids the vector resizing 
    cout<<v1.size()<<" "<<v1.capacity()<<endl;
    //v1.push_back({1,2,3});//this push_back makes a copy of the objects value passed as the argument in the push back function
    //and this will call the copy constructor because in push _back uses pass by value concept  
    //v1.push_back({2,2,4});
    //v1.push_back({6,5,4});
     

    v1.emplace_back(1,2,3);//this will directly create a object inside the vector and it will not call any copy constructor 
    v1.emplace_back(2,2,4);
    v1.emplace_back(6,5,4);
      

   cout<<v1[0].x<<" "<<v1[0].y<<" "<<v1[0].z<<endl;

//parameter on the right side of colon is the container name
//parameter oon the left hand side is the type of the vector and the element of the vector


  //In this loop the copy constructor will be called because every vector element will be first copied and then gets printed 
   for(vertex v:v1){
       cout<<v.x<<" "<<v.y<<" "<<v.z<<endl;
   }
   //in this loop the copy constructor will not be called becuase the vector element are passed by referrnce 
   for(vertex &v:v1){
       cout<<v.x<<" "<<v.y<<" "<<v.z<<endl;
   }



return 0;
}