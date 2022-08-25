#include<bits/stdc++.h>     //headerfile
using namespace std; 

bool primeCheck(int n){
    for(int i=2;i<n;i++){    // 13( 2-12)
        if(n%i==0) return false; //0
    }
    return true; //1
}

int main() {
    int n1,n2;
   // cout<<"enter a number to check prime"<<endl;
    cin>>n1>>n2;
    //cout<<primeCheck(n)<<endl;
    for(int i=n1;i<=n2;i++){
        if(primeCheck(i)) cout<<i<<" is a prime number"<<endl;
    else cout<<i<<" is NOT a prime number"<<endl;
    }
    
    int a;
    cin>>a;
    cout<<a<<endl;
    
    bool t=true;
    cout<<"CPP Language"<<endl;
    cout<<"java";
    
    //array (a list of data elements of same datatype and they are stored in 
    //contiguous memory location)
               //  0  1  2  3 4 5
    int marks[]={10,20,30,4,5,6,7,8,9,9,9,9,9,9,99,9,9,9,9}; //1d array declarationt
    
    cout<<&marks[0]<<endl; //base address
    cout<<&marks[1]<<endl; //base address+1
      
    int sz=sizeof(marks)/sizeof(marks[0]);  //(19*4)/4
    cout<<"size of array "<<sz<<endl;
    
    for(int i=0;i<3;i++) {
        cout<<marks[i]<<" ";
    }
    
    
    int ab=20;
    cout<<ab<<endl;
    cout<<&ab<<endl;
    
    //pointer (a variable which stores the address of another variable)
    int* c=&ab;
    cout<<c<<endl;
    cout<<*c<<endl;
    
    
}
