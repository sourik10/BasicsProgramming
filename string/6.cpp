#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//remove characteres from a string 
//time O(n),space O(n)

string removeCharacter(string s){
	string res;
	for(int i=0;i<s.size();i++){
		int ascii=int(s[i]);
		if((ascii >=65 && ascii <=90) || (ascii>=97 && ascii <=122)) res.push_back(s[i]);
	}
	return res;
}
int main(){
	string s="take12% *&u ^$#forward";
	cout<<removeCharacter(s)<<endl;

	/*
	int l=s.length();
	int c=count(s.begin(),s.end(),' ');
	remove(s.begin(),s.end(),' ');
	s.resize(l-c);
	cout<<s<<endl;
	*/

	
}
	
