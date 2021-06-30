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

class Person{
    public:
    Person(){

    }
    string name;
    int age;
    Person(string name,int age){
               this->name=name;
               this->age=age;
    }
    
};
//Function Template
template<class Type>
class Stack{
       public:
       int top;
       Type st[10];
       Stack() :top(-1) {}
       void push(Type var){
           this->st[++this->top]=var;
       }

       Type pop(){
           return this->st[this->top--];
       }
       Type peek();
      

};
//Function intialisation outside the class
//So whenever the class ffunction member nneds to be initialised then  you will need to write the template keyword
// ans also define the type of stack 
//And their is no boundation that class name declared below and in the class in template function should be same 
template<class Type>
Type Stack<Type>::peek(){
    return st[top];
}
/*int abs(int n){
      return (n<0) ? -n :n;
}
float abs(int n){
    return(n<0)?-n:n;
}
*/
//Instead of writing the abs function for different types we have used the generics to implement for all the types i.e. abs function

//Function Template
template<class T>  //This template keyword signals the compiler that we are going to define a function template 
                    //when this function is called then the complier resolves the type of object for which we need to call the geneerics function 
                    //and makes a newer version of the function by substituting the type of object everywhere instead of T
T abs_custom(T n){
    return (n<0) ? -n : n;
}

int main(){
int a=-4;
float b=-3.4f;
double s=5;
cout<<abs_custom(a)<<endl;
cout<<abs_custom(b)<<endl;
cout<<abs_custom(s)<<endl;
Person p1("Rohit",20);
Person p2("Rohan",21);
Person p3("Roshan",22);
Stack<Person> s1;
s1.push(p1);
s1.push(p2);
s1.push(p3);
cout<<s1.pop().name<<endl;;
cout<<s1.peek().name<<endl;
Person p2=s1.pop();

return 0;
}