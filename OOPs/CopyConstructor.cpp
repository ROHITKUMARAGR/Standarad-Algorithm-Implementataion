//Copy Constructor are of two types 
//1. Shallow Copy Constructor
//2. Deep Copy Constructor
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
    int img,real;
    int *ptr;

    ComplexNumber(){//Default Constructor
        this->real=0;
        this->img=0;
    }
    //ComplexNumber(int real=0,int img=0){ //Default Constructor
      //           this->real=real;
        //         this->img=img;
    //}

    //ComplexNumber(): real(0),img(0){} //Default Constrcutor


    ComplexNumber(int real,int img){//Constructor Overloading
             this->real=real;
             this->img=img;
    }

   void Display(){
       cout<<img<<" "<<real<<endl;
   }

 ComplexNumber(ComplexNumber &s){ //Deep Copy Constructor:-When an object is created by copying data of all the variables it also 
           this->real=s.real;      //allocates similar resource with the same value to the corresponding object
           this->img=s.img;
          // this->ptr=new int;
            //*ptr=*(s.ptr);
  }
//Default  Copy Constructor is the shallow copy constructor 

};


int main(){

ComplexNumber m(0,0);
ComplexNumber c=m;
cout<<c.ptr<<" "<<m.ptr<<endl;
cout<<*(c.ptr)<<" "<<*(m.ptr)<<endl;


return 0;
}