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
class ComplexNumber{
     public:
     int real;
     int img;
     ComplexNumber(int real,int img): real(real) ,img(img){}
     friend ostream& operator << (ostream &o,ComplexNumber &c);
     friend istream& operator >> (istream &i,ComplexNumber &c);
     //We can use the friend function to override the private member function of any class
     void operator >>(ComplexNumber &c){
         cout<<this->real+c.real<<endl;
     }

};

ostream& operator <<(ostream &o,ComplexNumber &c){
    o<<c.real<<" i"<<c.img<<endl;
    return o;
}
istream& operator >> (istream &i,ComplexNumber &c){
    i>>c.real>>c.img;
    return i;
}


int main(){
ComplexNumber a(2,3);
cout<<a; //cout me (<<) iswaale opeartor ko over ride karne ke liye 
//hm friend function ka use krte h taaki ostream ke under k member function ko override kr ske 
ComplexNumber c(4,5);
a>>c; //Normally we can use the two objects and overide (>>) operator


return 0;
}