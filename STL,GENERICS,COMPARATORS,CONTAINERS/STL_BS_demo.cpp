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
std::vector<int>v{1,2,3,3,3,4,5,5,6,7,8,8};
auto it=std::lower_bound(v.begin(),v.end(),2); //First element which is not less than x or greater >=x
cout<<*it<<endl;
it=std::lower_bound(v.begin(),v.end(),1); //First element which is not less than x or greater >=x
cout<<*it<<endl;
it=std::lower_bound(v.begin(),v.end(),3); //First element which is not less than x or greater >=x
cout<<*it<<endl;
it=std::lower_bound(v.begin(),v.end(),-1); //First element which is not less than x or greater >=x
cout<<*it<<endl;

cout<<"Upper Bound"<<endl;

it=std::upper_bound(v.begin(),v.end(),2); //First element which is grater than x or greater >x
cout<<*it<<endl;
it=std::upper_bound(v.begin(),v.end(),1); //First element which is greater than x or greater >x
cout<<*it<<endl;
it=std::upper_bound(v.begin(),v.end(),3); //First element which is greater than x or greater >x
cout<<*it<<endl;
it=std::upper_bound(v.begin(),v.end(),-1); //First element which is greater than x or greater >x
cout<<*it<<endl;

cout<<"Equal range"<<endl;

auto it3=equal_range(v.begin(),v.end(),5); //This will return the pair of iterators of vector
//Range of elements equal to x including the first and excluding the last range value
std::pair<std::vector<int>::iterator,std::vector<int>::iterator> it2=equal_range(v.begin(),v.end(),3);
//This is the expansion of auto written above.
cout<<(it3.first-v.begin())<<" "<<(it3.second-v.begin())<<endl; 





return 0;
}