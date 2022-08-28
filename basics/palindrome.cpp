#include <bits/stdc++.h>
using namespace std;
//1221-->1221 abba  6996  7888-->8887 
bool palindrome(int n){
    int rev=0,temp; 
    temp=n;
    while(temp!=0){ 
        rev=(10*rev)+(temp%10); 
        temp/=10;
    }
    return (n==rev);
}

int main()
{
	int n;cin>>n;
	cout<<palindrome(n);	
}
