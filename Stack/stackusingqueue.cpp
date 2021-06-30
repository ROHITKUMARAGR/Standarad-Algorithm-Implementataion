//IN push efficient always push time complexity will be O(1) and pop time complecity 
//In pop efficient always pop time complexity wil be O(1) and push time will be O(n)



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
queue<int>arru;
queue<int>arr;

void pusheff(int value){
arru.push(value);
}

void popinpusheff(){
int sizes=arru.size();
sizes-=1;
while(sizes>0){
     arr.push(arru.front());
     arru.pop();
     sizes--;
}
cout<<arru.front()<<endl;
arru.pop();
sizes=arr.size();
while(sizes>0){
     arru.push(arr.front());
     arr.pop();
     sizes--;
}

}

void popeff(){
  if(arru.size()>0){
      cout<<arru.front()<<endl;
      arru.pop();
   }else{
       cout<<"Underflow"<<endl;
   }


}
void pushinpopeff(int value){

int sizes=arru.size();
while(sizes>0){
     arr.push(arru.front());
     arru.pop();
     sizes--;
}
arru.push(value);
sizes=arr.size();
while(sizes>0){
     arru.push(arr.front());
     arr.pop();
     sizes--;
}

}

int main(){

int i,value;
do{
cin>>i;
cout<<"Enter 0 for the push in push efficient and 1 for pop in push efficient"<<endl;
cout<<"Enter 2 for the push in pop efficient and 3 for pop in pop efficient"<<endl;
switch(i){
case 0:
cin>>value;
pusheff(value);
break;

case 1:
popinpusheff();
break;

case 2:
cin>>value;
pushinpopeff(value);
break;

case 3:
popeff();
break;




}




}while(i==0||i==1||i==2||i==3);





return 0;
}