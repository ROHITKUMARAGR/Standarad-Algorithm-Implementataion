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
//void Printname(string name){
  //  cout<<name<<endl;
//}
void printname(string_view &s){
    cout<<s<<endl;
}
//Overloading the new operator
void* operator new(size_t size){
    cout<<"Called New!!"<<endl;
    return malloc(size);
}

int main(){
string str="Sanket Singh";
//Printname(str);
//string firstname=str.substr(0,6);
//string lastname=str.substr(7);
//Printname(firstname);
//Printname(lastname);
string_view firstname(str.c_str(),6);
string_view lastname(str.c_str()+6,5);
printname(firstname);
printname(lastname);

return 0;
}