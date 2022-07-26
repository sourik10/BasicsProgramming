#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


//best approach(using hashmap ,vector and inbuit sort)
//time O(n), space O(n)
bool compare(pair<int,int>a,pair<int,int>b){
	if(a.second==b.second) 	return a.first < b.first;
	return a.second>b.second;
}
void sortByFrequency(vector<int>&ar){
	unordered_map<int,int>mp;
	for(int i=0;i<ar.size();i++) mp[ar[i]]++;

	vector<pair<int,int>>v;
	for(auto it=mp.begin();it!=mp.end();it++){
		v.push_back({it->first,it->second});
	}
	sort(v.begin(),v.end(),compare);
	for(int i=0;i<v.size();i++){
		while(v[i].second > 0){
			cout<<v[i].first<<" ";
			v[i].second--;
		}
	}
}

int main(){
	vector<int>ar={3,3,5,2,1,1,2};
	sortByFrequency(ar);

	
}
	
