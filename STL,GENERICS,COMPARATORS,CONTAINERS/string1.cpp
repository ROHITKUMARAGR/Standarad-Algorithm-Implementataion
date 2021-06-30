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
void Printstring(string str){
    //this creats a copy 
    cout<<str<<endl;

}

void Print_string(string &str){
   //this prints by the help of reference
    cout<<str<<endl;
}

int main(){
char arr[]="ROhit";
const char *aru="Rohit"; // C Style Strings and C++ expects it to be constant 

cout<<arr<<endl;
cout<<aru<<endl;

cout<<sizeof(arr)<<" "<<sizeof(aru)<<endl;
char s3[10]={'s','a',0,'n','k','e','t'}; //Whenver an integer will be encountered then it will try to change to corrresponding 
//to related character value and 0 is the ascii value for the null character
cout<<s3<<endl; //will give output only sa


string str="Sanket";
cout<<str<<endl;
cout<<"size of str  "<<sizeof(str)<<endl;
// string str2="sanket" + "singh"; //this wont work because string literals are immutable
string str2=str+"singh";
cout<<str2<<endl;
cout<<"size of str2  "<<sizeof(str2)<<endl;
return 0;
}