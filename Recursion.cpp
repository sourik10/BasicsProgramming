#include<bits/stdc++.h>
using namespace std;

//sum upto n 
void fun1(int n,int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    fun1(n-1,sum+n);
}

//print from 1 to n
 void print(int i,int n){
     if(i>n) return;
     cout<<i<<endl;;
     print(i+1,n);
 }
 
 //print from n to 1
 void printBack(int i,int n){
     if(i==0) return;
     cout<<i<<endl;
     printBack(i-1,n);
 }
 
 void reverse(int* ar,int n,int l,int h){
     if(l>=h) return ;
     else{
         swap(ar[l],ar[h]);
         reverse(ar,n,l+1,h-1);
     }
 }
 
 bool checkPalindrome(string &str,int i){
     if(i>=str.size()/2) return true;
     return str[i]==str[str.size()-i-1] && checkPalindrome(str,i+1);
 }
