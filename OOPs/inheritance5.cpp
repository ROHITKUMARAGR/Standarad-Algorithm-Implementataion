//Contains the order of execution of constructor and destructor of the class

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
class A{
    public:
    A(){
        cout<<"Constructor A is called"<<endl;
    }
   ~A(){
       cout<<"Destructor of A is Called"<<endl;
   } 
};
class B:public A{
    public:
    B(){
        cout<<"Constructor B is called"<<endl;
    }
   ~B(){
       cout<<"Destructor of B is Called"<<endl;
   } 
};
class C : public B{
    public:
    C(){
        cout<<"Constructor C is called"<<endl;
    }
   ~C(){
       cout<<"Destructor of C is Called"<<endl;
   } 
};

int main(){
    C c;
  cout<<" "<<sizeof(A)<<" "<<sizeof(B)<<" "<<sizeof(C)<<endl;
return 0;
}