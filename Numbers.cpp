#include<bits/stdc++.h>
using namespace std;

//palindromeNumber check, time O(n)
bool checkPalindrome(int n){
    int tmp=n;
    int rev=0;
    while(temp){
        rev=(10*rev)+(tmp%10);
        tmp/=10;
    }
    if(tmp==rev) return true;
    else return false;
}

//reverse a Number , time O(n)
int reverseNumber(int n){
    int tmp=n;
    int rev=0;
    while(tmp){
        rev=(10*rev)+(tmp%10);
        tmp/=10;
    }
    return rev;
}

//primeNumber check , time O(sqrt(n))
bool checkPrime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false; break;
        }
    }
    return true;
}


//armmstrongNumber, time O(n)
bool checkArmstrong(int n){
    
     int tmp=n;
    int digit=0;
    while(tmp){
        digit++;
        tmp/=10;
    }
    int originalNo=n,sum=0;
    while(n){
        int lastDgit=n%10;
        sum+=pow(lastDgit,digit);
        n/=10;
    }
    return (originalNo==sum);
}

//perfectNumber check ,time = O(sqrt(n)
bool checkPerfectNumber(int n){
    int originalNum=n;
    int sum=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n || i==1) sum+=i;
            else sum+=i+(n/i);
        }
    }
    return (originalSum==sum);
}

//greatest 3 numbers
int greatest3numbers(int a,int b,int c){
 
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;
    
    //using ternaryOperator;
    int largest=a>b?(a>c?a:c):(b>c?b:c);
    return largest;
}

//sum Within range[left,right]
int sumRange(int l,int r){
    return (r*(r+1)/2) - (l*(l-1)/2);
}

//gcd nd lcm of 2 numbers, time O(log min(a,b))
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

//fibonacci Series
#include <bits/stdc++.h> 
using namespace std;

int fibonacciNumber(int n){
    if(n==0 || n==1) return n;
    return fibonacciNumber(n-1)+fibonacciNumber(n-2);
}

int main() {
   int n=8;
   //cout<<fibonacciNumber(n)<<endl;
   int a=0,b=1,c;
   cout<<a<<" "<<b<<" ";
   for(int i=2;i<n;i++){
       c=a+b;
       cout<<c<<" ";
       a=b;
       b=c;
   }
}



//factorial of  number
int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++) ans*=i;
    return ans;
}
int permutation(int n,int r){
    return factorial(n) / factorial(n-r);
}


int fibinacciSeries(int n){
    int t1=0,t2=1;
    int third=t1+t2;
    for(int i=3;i<=n;i++){
        t1=t2;
        t2=third;
    }
}

//leap year check,time O(1)
bool leaYearCheck(int n){
    if(n%400==0) return true;
    if(n%100==0) return false;
    if(n%4==0) return true;
    return false;
    
    
    if (((year % 4 == 0) && (year % 100 != 0)) ||(year % 400 == 0)) return true;
    else return false;
}



