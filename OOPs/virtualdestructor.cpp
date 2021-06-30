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
class Base{
    public:
    virtual  ~Base(){
              cout<<"Base Class Destructor is called"<<endl;
    }
};

class Derv : public Base{
           public :
           ~Derv(){
               cout<<"Derived Class Destructor is called"<<endl;
           }
};



int main(){
Base *b=new Base();
delete b;
Base *c=new Derv();
delete c;



return 0;
}