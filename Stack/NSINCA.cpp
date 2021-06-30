//Next Smallest Element in circular array using stack TC=O(n)


#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Enter the number of elements for which u need to find the NGE"<<endl;
int i;
cin>>i;
stack<int>arru;
int arr[i];
vector<int>arrui(i,-1);
cout<<"Enter the elements"<<endl;


for(int a=0;a<i;a++)
{
 cin>>arr[a];
}


for(int b=0;b<i;b++){
     if(arru.empty()==true){
         arru.push(b);
      
         
     }
     else{
            if(arr[b]>=arr[arru.top()]){
                arru.push(b);
                
                
            }else{
                 while(arru.empty()==false && arr[b]<arr[arru.top()]){
                     arrui[arru.top()]=arr[b];
                      arru.pop();
                      
                  }
                arru.push(b);
                continue;
              }


     }
}

while(arru.empty()==false){
       int d=(arru.top()+1)%i;
       while(d!=arru.top()){
       if(arr[d]<arr[arru.top()]){
            arrui[arru.top()]=arr[d];
            
            break;

       }
       d=(d+1)%i;
       }
       arru.pop();
}


for(auto el :arrui){
    cout<<el<<endl;
}

    


return 0;
}