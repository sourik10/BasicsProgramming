#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//remove brackets from an algebraic expression
string removeBrackets(string str){
	string ans;
	for(int i=0;i<str.size();i++){
		if(str[i]!='(' && str[i]!=')'){
			ans.push_back(str[i]);
		}
	}
	return ans;
}
int main(){
	 string input1 = "a+((b-c)+d)";
	 cout<<removeBrackets(input1)<<endl;
  
  
	/*
	int l=s.length();
	int c=count(s.begin(),s.end(),' ');
	remove(s.begin(),s.end(),' ');
	s.resize(l-c);
	cout<<s<<endl;
	*/

	
}
	
