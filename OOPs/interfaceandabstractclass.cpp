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
class Printable{
      public:
      virtual string getfun()=0;
};
class Entity{
    //Any Class containing at lest one pure virtual function then that class will be a abstract class/Interface 
    //And we will be not able to initialise the object of the particular class 
    public:
    Entity(){}
    virtual string get_String() = 0;  // Its A Syntax to declare a Pure Virtual Functions
    // A  Pure Virtual Function must be implemented in the subclass
        
};
class Player:public Entity,public Printable{
private:
   string name;
public:
Player(){}
   string get_String() override {  //This will help us to know that the base class fuunction must be a virtual function
       return this->name;
   }
   Player(const string &name):name(name){}
   string getfun() override {
       return "fun With ";
   }

};

void Print(Printable * e)
{
    cout<<e->getfun()<<endl;
}


int main(){
   // Entity *e=new Entity();
   Player *p=new Player("Rohit");
   Print(p);

return 0;
}