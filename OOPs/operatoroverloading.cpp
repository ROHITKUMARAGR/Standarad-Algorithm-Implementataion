#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define in cin
#define ff vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Test{
   public:
   int count;
   int arr[100];

   Test():count(0){} //Default Constrctor


   int getCount () const{
           return this->count;
   }

   //Overload unary operator ++(prefix,postfix);
    //case 1:overload prefix ++
   
   // void operator ++(){
    //    ++this->count;
   // }
    
    Test operator ++(){
        Test retval;
        cout<<"Prefix Operator Overloading"<<endl;
        ++this->count;
        retval.count=this->count;
        return retval;
    }

   // case 2: Overload Postfix ++
      Test operator ++(int){
        Test retval;
        cout<<"Postfix Operator overloading"<<endl;
        retval.count=this->count++;
        return retval;
    }
   //case 3:Binary Operator overloading
   /*Test operator+(Test t){
        Test retval;
         retval.count=this->count+t.count;
         return retval;
   }*/
void operator+(Test t){
        this->count=this->count+t.count;
}

//case 4: Overload Comparison Operator 

bool operator <(Test t){
           bool b=this->count<t.count;
           return b;
}
    
//case 5:Overload assignement Operator 
 void operator +=(Test t){
         this->count=this->count+t.count;
 }

//case 6: Overload subscript operator
 
int& operator [](int n){    //subscript operator always return by reference otherwise it will not work;
        if(n==0||n>=100) exit(1);
        return this->arr[n];
}
//Operators that we can't overload 
/*
 1.(.)Dot operator
 2.(?:) Ternary Operator
 3.(::) Scope resolution Operator
 4.(.*) pointer to member Operator
 5.(sizeof) size of Operator
 6.(typeid) gives type o
*/

};
int main()
{
Test t;
cout<<t.getCount()<<endl;
Test x=++t;
cout<<t.getCount()<<endl;
cout<<x.getCount()<<endl;
x + t;  //Here X acts as default object in the operator overloading but the t object acts as passed object in the operator overloading function
//x calls to add the object t into him
cout<<x.getCount()<<endl;
cout<<t.getCount()<<endl;
//cout<<a.getCount()<<endl;
bool b=x<t;
string s1="rohit";
string s2="anand";
Test d;
d+=x;
cout<<d[2]<<endl;//subscript operator overloading is done at this point 
cout<<(s1<s2)<<endl;//When the length will be same it will compare lexicographically
cout<<b<<endl;                                                   
//Type id operator
int i,j;
char ch;
const type_info& typei=typeid(i);
const type_info& typej=typeid(j);
const type_info& typech=typeid(ch);
cout<<(typei==typej)<<endl;
cout<<(typej==typech)<<endl;
return 0;
}