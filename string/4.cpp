#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//remove vowels from a string 
//time O(n),space O(1)
string removeVowels(string str){
	for(int i=0;i<str.size();i++){
				if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
					str=str.substr(0,i) + str.substr(i+1);
					i--;
				}

	}
	return str;
}

int main(){
	string s="sourik";
	cout<<removeVowels(s)<<endl;;
	
}
	
