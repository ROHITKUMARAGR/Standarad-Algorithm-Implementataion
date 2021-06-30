//You need to design a data structure that supports LIFO base addition ,deletion 
//and should also return the minimum element in the structure at any point.
//All operations should be done in o(1) time
//1). PUSH 
//2). POP
//3). GETMIN
//ALL THREE OPERATIONS IN O(1) OPERATIONS.
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
int push(){
    int x;
    int min;
    cout<<"Enter the value which you want to enter into  the stack"<<endl;
    if(arru.empty()==true){
         cin>>x;
         arru.push(x);
         min=arru.top();
    }
    else{
            cin>>x;
            if(x<arru.top()){
                arru.push(2*x-min);
                min=x;
            }else{
                arru.push(x);
            }
 
    }
    return min;

}
int pop(int min){
     if(min>arru.top()){
         min=2*min-arru.top();
         arru.pop();
     }else{
         arru.pop();
         
     }
return min;
}



int main(){  

int min=0;
min=push();
min=push();
min=push();
min=push();
min=push();
cout<<min<<endl;
min=pop(min);
cout<<min<<endl;
min=pop(min);
cout<<min<<endl;








return 0;
}