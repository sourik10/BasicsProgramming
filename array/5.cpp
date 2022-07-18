#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


//bestApproach (using hashmap/map in stl)
//time O(n) , space O(n)
void frequency(vector<int>&ar){
	unordered_map<int,int>mp;
	for(int i=0;i<ar.size();i++){
		mp[ar[i]]++;
	}
	for(auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
	}
}

int main(){
	vector<int>ar={10,5,10,15,10,5};
	frequency(ar);
	vector<int>arr={-1,-2,-3,4,0};
  frequency(arr);
	
}
	
