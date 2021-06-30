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
struct Player{
    int x,y;
   void Display(){
       cout<<x<<" "<<y<<endl;
   }

    ~Player(){
        cout<<"Destructed Successfully"<<endl;
    }
};


int main(){

unique_ptr<Player> ptr1=make_unique<Player>();//This is a unique pointr which cannot be re assigned and shared to other pointers.
ptr1->x=10;
ptr1->y=20;
ptr1->Display();
shared_ptr<Player> ptr2=make_shared<Player>();//This will make a shared pointer which can be shared and re assigned to other poiinters
shared_ptr<Player> ptr3=ptr2;
weak_ptr<Player> ptr4(ptr3);// Weak Pointers can be made by sharing the weak pointers or shared pointers.
weak_ptr<Player> ptr5(ptr4);
cout<<ptr3.use_count()<<endl;
cout<<ptr2.use_count()<<endl;


return 0;
}