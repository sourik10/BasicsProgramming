#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//count vowels,consonants,whitespaces in a string 
//time O(n),space O(1)

void count(string str){
	int vowels=0,cons=0,white=0;
	for(int i=0;i<str.size();i++){
		str[i]=tolower(str[i]);
	}
	for(int i=0;i<str.size();i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') vowels++;
		else if(str[i] >='a' && str[i]<='z') cons++;
		else if(str[i]==' ') white++;
	}
	cout<<"vowels: "<<vowels<<endl;
	cout<<"consonants: "<<cons<<endl;
	cout<<"whitespaces: "<<white<<endl;
}

int main(){
	string s="Take u forward is Awesome";
	count(s);
}
	
