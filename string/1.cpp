#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//https://takeuforward.org/data-structure/check-if-the-given-string-is-palindrome-or-not/
//check palindrome in string 
//time O(n),space O(1)

bool isPalindrome(string str){
	int l=0,h=str.size()-1;
	while(l<h){
		if(!isalnum(str[l])) l++;
		else if(!isalnum(str[h])) h--;
		else if(tolower(str[l])!=tolower(str[h])){
			return false;
		}
		else {
			l++,h--;
		}
	}
	return true;
}

int main(){
	string s="RACECAR";
	if(isPalindrome(s)) cout<<"Palindrome"<<endl;
	else cout<<"Not Palindorme"<<endl;	
}
	
