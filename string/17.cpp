#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//remove all duplicates from the string
//time O(n)
string deleteDuplicate(string str){
	vector<bool>v(26,false);
	string ans="";
	for(int i=0;i<str.length();i++){
		if(v[str[i]-'a']==false){
			ans+=str[i];
			v[str[i]-'a']=true;
		}
	}
	return ans;
}

int main(){
	 string str1="fergusonnn";
	 cout<<deleteDuplicate(str1);

}
	
