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
//This Implementation is done in O(1) space complexity and O(N) time complexity 
void reverse_array(int low,int high,int arr[]){
    int last=high;
    for(int a=low;a<low+((high-low)/2);a++){
             int temp=arr[a];
             arr[a]=arr[last-1];
             arr[last-1]=temp;
             last-=1;
    }            

}
int main(){

int i;
cin>>i;
while(i--){
    int k;
    cin>>k;
    int arr[k];
    for(int a=0;a<k;a++){
        cin>>arr[a];
    }
    int j;
    cin>>j;
    j=j%k;
    reverse(arr,arr+k);  //These are the Stl to revers an array 
    reverse(arr,arr+j);
    reverse(arr+j,arr+k);
    //reverse_array(0,k,arr);   //These function is self implemented to reverse any array 
    //reverse_array(0,j,arr);
    //reverse_array(j,k,arr);
    for(int c=0;c<k;c++){
        cout<<arr[c]<<" ";
    }
    cout<<endl;
}


return 0;
}