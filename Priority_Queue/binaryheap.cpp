//Implementation of the binary max heap

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
void upheapify(int arr[],int index){
   if(index==0){
       return ;
   }
   int pi=(index-1)/2;
   if(arr[pi]<arr[index]){
       int temp=arr[pi];
       arr[pi]=arr[index];
       arr[index]=temp;
       upheapify(arr,pi);
   }else{
       return;
   }
}

void downheapify(int arr[],int index,int len){
      if(index==0){
          return;
      }
    int lci=2*index+1;
    int rci=2*index+2;
     int siz=len;
    if(lci>=siz&& rci>=siz){
        return;
    }
    int largest=index;
    if(lci<siz&& arr[lci]>arr[largest]){
        largest=lci;
    }
    if(rci<siz&& arr[rci]>arr[largest]){
        largest=rci;
    }
    if(largest==index){
        return;
    }
    int temp=arr[largest];
       arr[largest]=arr[index];
       arr[index]=temp;

     downheapify(arr,largest,siz);  

}
// inserting every element and making the heap in O(nlogn) time.
void insert(int arr[],int key,int c){
      
      arr[c]=key;
      upheapify(arr,c);
      
}
int getheap(vector<int>arr){
    return arr[0];
}

int removepeek(int arr[],int len){

    int temp=arr[0];
    arr[0]=arr[len-1];
    arr[len-1]=temp;
    len=len-1;
    downheapify(arr,0,len);
    return len;
}

// Creating a heap in O(n) time.
void buildheap(int arr[],int len){
    int size=len;
     len=len-1;
     len=len/2+1;
     while(len>=0){
         downheapify(arr,len,size);
         len--;
     }

return ;
}


int main(){
cout<<"Enter the elements you want to enter in the heap"<<endl;
int n;
cin>>n;
int arr[n];
for(int c=0;c<n;c++){
      cin>>arr[c];
  //  insert(arr,a,c);
}
/*
for(int d=0;d<n;d++)
{
    cout<<arr[d]<<" ";
}
//n=removepeek(arr,n);
*/
buildheap(arr,n);
for(int d=0;d<n;d++)
{
    cout<<arr[d]<<" ";
}
cout<<endl;
return 0;
}