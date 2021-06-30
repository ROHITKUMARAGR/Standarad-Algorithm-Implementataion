//Contains Implementation of Virtual Function
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
class Entity{
    public:
    Entity(){}
    virtual string get_String(){
        return "Entity";
    }
};
class Player:public Entity{
private:
   string name;
public:
Player(){}
   string get_String() override {  //This will help us to know that the base class fuunction must be a virtual function
       return this->name;
   }
   Player(const string &name):name(name){}

};
class C:public Player{
         public:
         C(){}
         string get_String(){
             return "C";
         }
};

void Printer(Entity *e){
        cout<<e->get_String()<<endl;
}
int main(){
Entity t1;//THis will create the t1 object in call stack    
Entity *e=new Entity();//THis will create the object in heap area //Entity pointer pointing to entity object
cout<<e->get_String()<<endl;
Player *b=new Player("Rohit"); //Player Pointer pointing to pointer object
cout<<b->get_String()<<"\n";
Entity *e2=b;//Its a Valid Statement   //Entity pointer to player object
cout<<e2->get_String()<<endl;
/*THe problem is even though we have e2 as entity pointer but it points to an object of player 
which has seperate implemenatation of get_String
*/

//We Can Resolve Using the Virtual Function           //implemented in next code
cout<<"**********"<<endl;;
Printer(e);
Printer(b);
Printer(e2);
//So with this implementation LHS will win and call its function

//BAse Classs dosent knows about the child class but the child class knows about the Base Class
//Player *p2=e;   //Cant Do this


cout<<"//////////////////////////"<<endl;
Entity *e3=new C();
Player *p3=new C();
C *c3=new C();
cout<<e3->get_String()<<endl;
cout<<p3->get_String()<<endl;
cout<<c3->get_String()<<endl;

return 0;
}