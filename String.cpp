#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){
    int l=0,h=str.size()-1;
    while(l<=h){
        if(str[l]!=str[h]){
            return false;
        }
        else{
            l++,h--;
        }
    }
    return true;
}
