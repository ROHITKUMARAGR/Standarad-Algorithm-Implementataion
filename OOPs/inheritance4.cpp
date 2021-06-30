//Multiple Inheritance implementation
#include<bits/stdc++.h>
#define ll long long 
#define pb push_back 
#define in cin
#define ff vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
class Employee{
private:
     string name;
     long id;

public:
Employee(){
    cout<<"Employee Constructor"<<endl;
}
    void get_data() const{
        cout<<"Name"<<name<<endl;
        cout<<"Id:"<<id<<endl;
    }
    void set_data(){
        cout<<"Enter a Name";
        cin>>name;
        cout<<"Enter the Id ";
        cin>>id;
    }

};
class Student{
private:
     string Schoolname;
     string Degree;

public:
Student(){
    cout<<"Student Constructor is called"<<endl;
}
    void get_data() const{
        cout<<"SchoolName"<<Schoolname<<endl;
        cout<<"Dgeree"<<Degree<<endl;
    }
    void set_data(){
        cout<<"Enter a SchoolName";
        cin>>Schoolname;
        cout<<"Enter the Degree";
        cin>>Degree;
    }

};

class Manager:private Student , private Employee{
    private:
    string title;
    double salary;

    public:
    Manager(){
        cout<<"Manager Constructor is called"<<endl;
    }
    void get_data() const{
        Student::get_data(); //explicitily call a function in a parent class
        Employee::get_data();
        cout<<"Title"<<title<<endl;
        cout<<"Salary"<<salary<<endl;
    }
    void set_data(){
        Student::set_data();
        Employee::set_data();
        cout<<"Enter a Title";
        cin>>title;
        cout<<"Enter the Salary";
        cin>>salary;
    }

};

int main(){

Manager m1;
m1.set_data();
m1.get_data();
return 0;
}