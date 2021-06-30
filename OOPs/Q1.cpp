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
class Shapes{
    public:
    virtual void Display() = 0;
};
class Triangle : public Shapes{
   
       void Display() override {
           int m=5,n=5;
  for(int i=1;i<=n;i++)  
       {  
       for(int j=1;j<=m-1;j++)  
       {  
           cout<<" ";  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         cout<<"*";  
       }  
       m--;  
     
      cout<<"\n";  
    }  
       }
};

class Square : public Shapes{
      
    void Display() override{
        int squareSide=10;
              for(int x = 0; x < squareSide; ++x)
    {
        //inner loop
        for(int y = 0; y < squareSide; ++y)
        {
            printf("*");
        }
        printf("\n");
    }
    }
};
class Circle: public Shapes{



           void Display() override {
               int radius=5;
               float dist;
 
  
  for (int i = 0; i <= 2 * radius; i++) {
 
  
    for (int j = 0; j <= 2 * radius; j++) {
      dist = sqrt((i - radius) * (i - radius) +
                  (j - radius) * (j - radius));
 
     
      if (dist > radius - 0.5 && dist < radius + 0.5)
        cout << "*";
      else
        cout << " ";     
    }
 
    cout << "\n";
  }
           }

};
void Print(Shapes *s){
        s->Display();
}

int main(){
  
Triangle *t1=new Triangle();
Print(t1);
cout<<"\n";
cout<<"?????????????????????????????????????????"<<endl;
Square *s1=new Square();
Print(s1);
cout<<"\n";
cout<<"???????????????????????????????"<<endl;
Circle *c1=new Circle();
Print(c1);
return 0;
}