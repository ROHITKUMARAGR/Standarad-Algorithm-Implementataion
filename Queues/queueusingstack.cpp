//Implementing queue using stack

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
stack<int>arru;
stack<int>arr;

void pusheff(int value){
     arru.push(value);
}
void popinpusheff(){
    int sizes=arru.size();
    if(sizes>0){

    sizes=sizes-1;
    while(sizes>0){
        arr.push(arru.top());
        arru.pop();
        sizes--;
    }
cout<<arru.top()<<endl;
arru.pop();

 sizes=arr.size();
 while(sizes>0){
       arru.push(arr.top());
       arr.pop();
       sizes--;
 }
    }else{
        cout<<"Underflow"<<endl;
    }

 
}

void popeff(){
    if(arru.size()>0){
    cout<<arru.top()<<endl;
    arru.pop();
    }else{
        cout<<"Underflow"<<endl;
    }
}

void pushinpopeff(int value){
    int sizes=arru.size();
    
    while(sizes>0){
        arr.push(arru.top());
        arru.pop();
        sizes--;
    }
    arru.push(value);
   
 sizes=arr.size();
 while(sizes>0){
       arru.push(arr.top());
       arr.pop();
       sizes--;
 }

}



int main(){



//push efficient Time complexity for push operartion is O(1) and time complexity for pop operation O(n)
//We will have to enter the values accordingly in pushefficient and popefficient to see the required result  :)
int j;
int value;
do{
cout<<"Enter the choice 1 if u want to push in push efficient or 0 if u want to pop in the push efficient"<<endl;
cout<<"Enter the choice 2 if u want to push in pop efficient or 3 if u want to pop in the pop efficient"<<endl;
cin>>j;
switch(j){
case 1:
cin>>value;
pusheff(value);
break;

case 0:
popinpusheff();
break;

case 2:
cin>>value;
pushinpopeff(value);
break;

case 3:
popeff();


}



}while(j==0||j==1||j==2||j==3);






return 0;
}