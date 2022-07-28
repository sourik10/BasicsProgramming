#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//non repeating characters
void nonRepeat(string str){
	int f[26]={0};
	for(int i=0;i<str.size();i++){
		if(str[i]==' ') continue;
		else{
			f[str[i]-'a']++;
		}
		
	}
	for(int i=0;i<str.size();i++){
		if(f[str[i]-'a']==1 && str[i]!=' ') cout<<str[i]<<" ";
	}
}
int main(){
	 string input1 = "takeuforward geeksforgeeks";
	 nonRepeat(input1);
	/*
	int l=s.length();
	int c=count(s.begin(),s.end(),' ');
	remove(s.begin(),s.end(),' ');
	s.resize(l-c);
	cout<<s<<endl;
	*/

	
}
	
