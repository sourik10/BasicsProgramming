#include <bits/stdc++.h>
using namespace std;

class Student{
    public:  //data members
    int roll;
    string name;
    bool gender;
    
    Student(){ //default constructor
        cout<<"Default Constructor called"<<endl;
    }
    ~Student(){
        cout<<"destructor called"<<endl;
    }
    Student(int r,string n,bool g){  //parameterised constructor
        roll=r;
        name=n;
        gender=g;
        cout<<"Parameterised construtor called"<<endl;
    }
    
    void details(){  //member fucntions
        cout<<roll<<" "<<name<<" "<<gender<<endl;
    }
};

int main() {
    
  Student s;
  s.roll=100; s.name="Sourik"; s.gender=1;
  s.details();
   
 Student s2=Student(101,"Ayan",true);
 s2.details();
 
 
    return 0;
}
