//Circular Queue


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
int enqueue(int *front,int *back,int i){
    if(*back==-1){
        *back+=1;
        *front+=1;
        return 1;
    }else{
           if((*back+1)%i==*front){//overflow condition
                cout<<"Overflow"<<endl;
               return 0;
           }else{
               *back+=1;
               return 1;
           }



    }
    




}
void dequeue(int *front,int *rear,int i){
    if(*front==-1){
        cout<<"Underflow"<<endl;
     
    }else{
      if(*front+1-*rear==1){
          cout<<"Underflow"<<endl;
          *front=-1;
          *rear=-1;
        
      }else{
          *front+=1;
        
      }



    }


}


int main(){
int i;
cout<<"Enter the number of lements you want to keep in the circular queue"<<endl;
cin>>i;
int arr[i];
int front=-1;
int rear=-1;
dequeue(&front,&rear,i);
    

if(enqueue(&front,&rear,i)){
    arr[rear]=1;
}

if(enqueue(&front,&rear,i)){
    arr[rear]=1;
}
if(enqueue(&front,&rear,i)){
    arr[rear]=1;
}
if(enqueue(&front,&rear,i)){
    arr[rear]=1;
}
dequeue(&front,&rear,i);
for(int a=front;a!=rear;(a+=1)%i){
     cout<<arr[a]<<endl;
}
cout<<arr[rear]<<endl;



return 0;
}