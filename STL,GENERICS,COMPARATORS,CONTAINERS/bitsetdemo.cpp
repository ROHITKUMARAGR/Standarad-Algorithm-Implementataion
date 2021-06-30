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

bool arr[10];
cout<<sizeof(arr)<<endl;
bitset<10>bs;
cout<<sizeof(bs)<<endl;
bitset<20>bas(string("1001010011"));
cout<<sizeof(bas)<<endl;
bas[0]=0;
cout<<bs<<endl;
cout<<bas<<endl;
cout<<"No of ones :"<<bas.count()<<endl;
cout<<"No of zeroes"<<bas.size()-bas.count()<<endl;
cout<<bas.any()<<endl;//this function tells us that anyof the bits are set(i.e. 1) if yes then prints 1 else 0
cout<<bas.all()<<endl;
bas.set(10); // this will make the 10th index equal to 1
bas.set();// this will make all the bits equal to 1
bas.reset(); //this will make all the bits to zero
bas.set(10,0);// this set will also the value(second argument) you want to put in the index(fist argument)
bas.set(11,1);
bas.reset(10); //this will make the 10th index to 0
cout<<bas.to_string()<<endl;
cout<<bas.to_ullong()<<endl;
bas=bas>>5;//right shift operator
return 0;
}