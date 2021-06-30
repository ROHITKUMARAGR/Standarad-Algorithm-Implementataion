//It contains the multilevel inheritance implementation

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
class Base {
    private :
    int pvt=0;
    protected:
    int prot=0;
    public:
    int pub=0;
private:
    int getPvt(){
        return pvt;
    }
public :
int getpub(){
    return pub;
} 
protected:
int getprot(){
    return prot;
}

};
class PublicInherit: public Base{
         public:
         int getprot(){
             return prot;
         }


};
class puma: Base{
       //By default the inheritance visibility is private
};

class protectedInherit :protected Base{
 //In this all the Base Class data members and function members will become protected 
 //this protected intimates that all the inherited properties will be seen(visibility) in the derived class 
};
class privateInherit : private Base{
 //IN this class all the base class data members and member functions will become private 
 //this private intimates that all the inherited propeties will be seen(visibility) in the derived class
};

class C :public PublicInherit{
    public:
    void Display(){
        cout<<getprot()<<endl;
    }
};

int main(){
    PublicInherit p2;
    C obj;
    obj.Display();
return 0;
}