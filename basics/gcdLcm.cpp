#include <bits/stdc++.h>
using namespace std;
//a ,b --> lcm(a,b)=  a*b / gcd(a,b)

 int gcd(int a, int b){  //g(10,15)-->g(15,10)---> g(10,5)--->g(5,0)--->5(ansnwer gcd)
	//basecase
	if(b==0)
		return a;

    //recursive case
	return gcd(b, a % b); 
}

int lcm(int a, int b){  
    return (a * b) / gcd(a, b);
}


int main() {
    int p,q;
    cin>>p>>q;

    cout<<"gcd: "<<gcd(p,q)<<endl;
    cout<<"lcm: "<<lcm(p,q)<<endl;
}
