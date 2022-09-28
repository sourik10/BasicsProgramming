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
    
    
    //Student(Student &xyz){
     //   roll=xyz.roll;
     //   name=xyz.name;
     //   gender=xyz.gender;
    //}
    
    void details(){  //member fucntions,this pointer in cpp
        cout<<this->roll<<" "<<this->name<<" "<<this->gender<<endl;
    }
};

int main() {
    
  Student s;
  s.roll=100; s.name="Sourik"; s.gender=1;
  s.details();
   
 Student s2=Student(101,"Ayan",true);
 s2.details();
 
 /* //copy Constructor
 Student s3(s2);
 s3.details();
 */
 
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    
    public:
    int roll;
    int salary;
    
    public: //encapsulation
    void setName(string name){ //setter function in cpp
        this->name=name;
    }
    
    string getName(){  //getter function in cpp
        return name;
    }
    
};
class Abstraction{  //abstraction
    private:
    int x,y;
    
    public:
    void set(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
};

//inheritance in cpp
class Bike{
    public:
    string name;
    int price;
    void plssss(){
        cout<<999999999999<<endl;
    }
};
class Ktm:public Bike{
    int speed=900;
    void pace(){
        cout<<speed<<endl;
    }
};
class Pulsar: public Bike{
    int yrs=10;
    void mileage{
        cout<<yrs<<endl;
    }
};

int main(){
    Student s;
    s.setName("Sourik");
    cout<<s.getName()<<endl;
    
    Abstraction a;
    a.set(10,20);
    a.display();
    
    Ktm k;
    k.pace();
}
