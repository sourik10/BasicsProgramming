#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//print all duplicates from string 
//time O(n)
void printDuplicates(string str){
	unordered_map<char,int>mp;
	for(int i=0;i<str.length();i++){
		mp[str[i]]++;
	}
	for(auto it:mp){
		if(it.second > 1) cout<<it.first<<" ";
	}
}

int main(){
	 string str1="sourikki";
	 //cout<<deleteDuplicate(str1);
	 printDuplicates(str1);
}
	
