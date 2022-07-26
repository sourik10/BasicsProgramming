#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//brute force approach 
//time O(nlog n) + o(n) ,for sorting and linearly traversing the whole array
//space O(1)
void findrepeat(vector<int>&ar){
	sort(ar.begin(),ar.end());
	for(int i=0;i<ar.size()-1;i++){
		if(ar[i]==ar[i+1]) cout<<ar[i]<<" ";
	}
}


int main(){

	vector<int>arr = {1,1,2,3,4,4,5,2};
  
  //best appraoch 
  //time O(n)
  //space O(n)
	unordered_map<int,int>mp;
	for(auto it:arr){
		mp[it]++;
	}
	cout<<"repeating elements are: "<<endl;
	for(auto it:mp){
		if(it.second > 1) cout<< it.first<<" ";
	}
	cout<<endl;

	findrepeat(arr);
}
	
