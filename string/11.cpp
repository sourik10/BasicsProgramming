#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//count frequncy of character in a string 
void countFreuqency(string str){
	int f[26]={0};
	for(int i=0;i<str.size();i++){
		f[str[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(f[i]!=0){
			cout<<char(i+'a')<<f[i]<<" ";
		}
	}
}
int main(){
	 string input1 = "takeuforward";
	 countFreuqency(input1);
  
  
	/*
	int l=s.length();
	int c=count(s.begin(),s.end(),' ');
	remove(s.begin(),s.end(),' ');
	s.resize(l-c);
	cout<<s<<endl;
	*/

	
}
	
