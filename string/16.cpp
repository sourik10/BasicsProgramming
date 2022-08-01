#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//return character with maximum frequency
//time = O(n)
char maxFreqeuncy(string str){
	int maxFreq=0;
	char ans;
	unordered_map<char,int>mp;
	for(int i=0;i<str.length();i++){
		mp[str[i]]++;
		if(mp[str[i]] > maxFreq){
			maxFreq=max(mp[str[i]],maxFreq);
			ans=str[i];
		}
	}
	return ans;
}

int main(){
	 string str1="ronaldo";
	 cout<<maxFreqeuncy(str1)<<endl;

}
	
