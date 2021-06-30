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
int main(){
//string literals 
const char arr[20]="san\0ket"; //so the null character will acts as a terminating character so it will read before only null character
cout<<arr<<endl;
const wchar_t* wstr=L"Sanket";//Size will depend on the compiler
wcout<<wstr<<endl;//this wcout is used to print the wide characters 
wstring wstr2=L"Sanket";//Wide String 
wcout<<wstr2<<endl;//Wcout to print the wide strings
const char16_t* s16=u"Sanket";//16 bits  and now a caharacter will be of 16bits


const char32_t* s32=U"Sanket";//32 bits  and now a character will be of 32 bits 
cout<<(char)s16[0]<<endl;
cout<<s32[2]<<endl;

//This can v=be used to concatinate a string literals
using namespace std::string_literals;
string s2="sanket"s+"singh"; // s acts as a operator
cout<<s2<<endl;
//If we write s after the string literals then we can concatenate with the other string literals or strings 




const char* multiline=R"(Line1,
Line2,
Line3,
Line4)";//Raw Strings 
cout<<multiline<<endl; 
//this is also a Raw String
const char *multiline2="line1\n"
"line2\n"
"line3\n";
cout<<multiline2<<endl;

char c2[]="Sanket";
// c2="Singh";//this is not re assignable
cout<<c2<<endl;
return 0;
}