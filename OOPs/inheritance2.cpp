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
class Stack{
    protected:
    int st[10];
    int top;

    public:
    Stack(){
        this->top=-1;
    }

    void push(int a){
        cout<<"Stack 1 push Called"<<endl;
        this->st[++this->top]=a;
    }

    int pop(){
        cout<<"Stack 1 pop called"<<endl;
         return this->st[this->top--];
    }
    int peek(){
        return this->st[this->top];
    }

};
class Stack2: public Stack{ // We 2.can write public /private as required property to change or if we will not write both the specifiers then also their is no problem
    public:
    //Method Overriding
    void push(int v){
        cout<<"Stack 2 push called"<<endl;
               if(this->top>=9){
                   cout<<"Error Stack is full"<<endl;
               }
               this->st[++this->top]=v;
    }
   //Method Overriding 
    int pop(){
        cout<<"Stack 2 pop is called"<<endl;
             if(this->top<0){
                 cout<<"Stack is Empty"<<endl;
                 exit(1);
             }
            return Stack::pop(); //Method to call specific function of any class
    }


};

int main(){

    Stack2 s2;
    s2.push(11);
    s2.push(12);
    s2.push(13);
    s2.push(14);
    cout<<s2.pop()<<endl;;;;;;
    cout<<s2.peek()<<endl;

return 0;
}