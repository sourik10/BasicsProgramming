#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

bool check(string str1,string str2){

	//time = O(n)
	if(str1.length()!=str2.length()) return false;

	int freq[26]={0};
	for(int i=0;i<str1.length();i++){
		freq[str1[i]-'A']++;
	}
	for(int i=0;i<str2.length();i++){
		freq[str2[i]-'A']--;
	}
	for(int i=0;i<str1.length();i++){
		if(freq[i]!=0) return false;
	}
	return true;

}

bool checkAnagram(string str1,string str2){
	//time = O(nlogn)-->for sort function
	if(str1.length()!=str2.length()) return false;

	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	for(int i=0;i<str1.length();i++){
		if(str1[i]!=str2[i]) return false;
	}
	return true;
}

int main(){
	 string str1 = "INTEGER";
  	 string str2 = "TEGERNI";
	 
  	 //if(checkAnagram(str1,str2)) cout<<"true"<<endl;
  	 //else cout<<"false"<<endl;

  	 if(check(str1,str2)) cout<<"true"<<endl;
  	 else cout<<"false"<<endl;
	
	
}
	
