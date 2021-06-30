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
    int x;
    int y;
    friend int getvalue(A &a);//definition of a function
    public :int getval();//definition of a function
   
};
int A::getval(){  //Declaration of a function
    cout<<this->x<<" "<<this->y<<endl;
      return 0;
}
int getvalue(A &a){  //Declaration of a function
      cout<<a.x<<" "<<a.y<<endl;
      return 0;
}


int main(){
A obj;
cout<<obj.getval()<<endl;

return 0;
}