#include <bits/stdc++.h>
using namespace std;
bool isEven(int num){
    if(num%2) return false;
    return true;
}
int main() {
    int n;cin>>n;
   // isEven(n) ? cout << "Even" : cout << "Odd";
    if(isEven(n)) cout<<"even";
    else cout<<"odd";
}
