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
class Stack1{
private:
    int top;
    int st[10];
    
public://Creating our own custom exception 
class Range{
       private:
       const char* arr;
       int errorcode;
       public:
       Range(const char * arr,int err){
           this->arr=arr;
           this->errorcode=err;
       }
       void what(){
           cout<<arr<<" "<<errorcode<<endl;
       }
};
class EmptyRange : public exception{
    public:
    virtual const char* what() const noexcept{
        return "Derived from excpetion";
    }

};
     Stack1() : top(-1){}
      void push(int x){
          if(top>=9){
              throw "Overflow";
          }
          st[++top]=x;
      } 

      int pop(){
          if(top<0){
              //throw Range("Underflow",500);
              throw EmptyRange();
          }
          return st[top--];
      }
};
int divide (int x,int y) throw (const char *){ // throw (const char*) represents that this method may throw the exception of an object type const char *
    if(y<=0) throw "Zero Division not supported";
    int c=x/y;
    return c; 
}
int main(){
Stack1 s1;
try{
    //s1.pop();
    divide(6,0);
}catch(const char* &arr){
    cout<<arr<<endl;
}
catch(Stack1::Range &r){
    r.what();
}
// catch(Stack1::EmptyRange &er){
   //  cout<<"Chill Hain Zindagi"<<endl;
  // }
//catch(...){ //This can catch all the excepitions object thrown from the try block or by the throw keyword
  //  cout<<"Catch All"<<endl;
//}



return 0;
}