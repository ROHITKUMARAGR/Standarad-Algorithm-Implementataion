//Virtual Inheritance
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
class Parent{
    protected:
    int x=11;
    public :
     int getX(){
         return x;
     }
};
class Child1:virtual public Parent{

};
class Child2:virtual public Parent{

};
//Diamond Problem This problem exist in multiple inheritance
class grandchild :public Child1,public Child2{
     public :
     int getX(){
         return x;
     }
};
int main(){
return 0;
}