#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//https://takeuforward.org/data-structure/find-the-smallest-element-in-an-array/
//bruteforce approach 
//time complexity O(n*log n)
//space complexity O(1)
int sortAsc(vector<int>&ar){
	sort(ar.begin(),ar.end());
	return ar[0];
}
int sortDesc(vector<int>&ar){
	sort(ar.begin(),ar.end());
	return ar[ar.size()-1];
}


//optimised approach
//time complexity O(n)
//space complexity O(1)

int miniElement(vector<int>&ar){
	int mini=ar[0];
	int n=ar.size();
	for(int i=1;i<n;i++){
		if(ar[i]<mini) mini=ar[i];
	}
	return mini;
}

int main(){
	vector<int>ar={4,5,0,7,19,12};
	vector<int>arr={-1,-2,-3,4,0};
	cout<<"smallest: "<<sortAsc(arr)<<endl;
	cout<<"largest: "<<sortDesc(arr)<<endl;
	
	cout<<"smallest: "<<miniElement(arr)<<endl;
	

}
	
