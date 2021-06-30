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
class Product { //Parent Class
   protected: //All the protected members are accessible in the class and derived class
    int count;

    public:
    int get_count() const {
         return this->count;
    }
       Product () :count(0) {
           cout<<"Constructor 1 is called"<<endl;
       }
       Product (int c) :count(c) {
           cout<<"constructor 2 is called"<<endl;
       }

    Product operator ++(){
                  ++this->count;
                return Product(this->count);
    }



};

class Product_son : public Product{   // a derived class is formed using the base class

    public :
    Product operator --(){
            return Product(--this->count);
    }
    Product_son(){
         cout<<"Derived Class Default Constructor is called"<<endl;
    }

    Product_son(int a) : Product(a){
            cout<<"Derived Class One argument Constructor is called"<<endl;
    }

    Product_son(int a,int b){
        cout<<"Derib=ved class two argument constructor is called"<<endl;
    }





};


int main(){


   Product a;
   Product_son c;
   ++c,++c;
   cout<<c.get_count()<<endl;
   --c;
   cout<<c.get_count()<<endl;
   Product_son g(4);
  // cout<<g.get_count()<<endl;


return 0;
}