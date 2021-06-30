//Rohit Kumar Agrahari 201951129 IIITV
#include<bits/stdc++.h>
#include<algorithm>
#define ll long long 
#define pb push_back
#define t int 
#define in cin
#define ff vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;

struct cars{
    int price;   
    int mileage;
    string name;
    string color;

    bool operator <(struct cars &c) const{
        return price<c.price;

    }
};
//bool comp(const struct cars &c1,const struct cars &c2){
  //     return c1.price>c2.price;
//}
//Comparator function to compare the objects o tha basis of mileage and if the mileage is same then compare with the price 
/*bool comp(const struct cars &c1,const struct cars &c2){
    if(c1.mileage==c2.mileage){
             return c1.price<c2.price;
    }
    return c1.mileage<c2.mileage;
}
*/

int main(){
int n;
cin>>n;
struct cars arr[n];
for(int a=0;a<n;a++){
    cin>>arr[a].price>>arr[a].mileage>>arr[a].color>>arr[a].name;
}

//Their are three ways to do the sorting of an array of objects or array of structs 
sort(arr,arr+n);//one sort after doing the operator oveloading 
//sort(arr,arr+n,comp);//One sort with the help of comparator function
//sort(arr,arr+n,[](cars c1,cars c2){return c1.price<c2.price;});//one sorting is done using the lambda expression
for(int a=0;a<n;a++){
    cout<<arr[a].price<<" "<<arr[a].mileage<<" "<<arr[a].color<<" "<<arr[a].name;
    cout<<endl;
}

return 0;
}