#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//reverse a string using stack
//time O(n),space O(n)

string reverseString(string s){
	string ans;
	stack<char>st;
	for(int i=0;i<s.size();i++){
		st.push(s[i]);
	}
  
	while(!st.empty()){
		char t=st.top();
		st.pop();
		ans.push_back(t);
	}
	return ans;
}

int main(){
	string s="takeuforward";
	cout<<reverseString(s)<<endl;

	/*
	int l=s.length();
	int c=count(s.begin(),s.end(),' ');
	remove(s.begin(),s.end(),' ');
	s.resize(l-c);
	cout<<s<<endl;
	*/

	
}
	
