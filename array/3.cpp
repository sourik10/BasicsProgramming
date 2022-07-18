#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array/
//bruteForce, time O(n*log n) ,space O(1)
int sortAsc(vector<int>&ar){
	sort(ar.begin(),ar.end());
	return ar[1];
}
int sortDesc(vector<int>&ar){
	sort(ar.begin(),ar.end());
	return ar[ar.size()-2];
}

//betterApproach , time O(n) , space O(1)
void getSecond(vector<int>&ar){
	int small=INT_MAX;
	int large=INT_MIN;
	for(int i=0;i<ar.size();i++){
		if(ar[i]<small) small=ar[i];
		if(ar[i]>large) large=ar[i];
	}
	cout<<"largest: "<<large<<endl;
	cout<<"smallest: "<<small<<endl;

	int prevSmall=INT_MAX,prevLarge=INT_MIN; //secondSmallest && secondLargest
	for(int i=0;i<ar.size();i++){
		if(ar[i]<prevSmall && ar[i]!=small) prevSmall=ar[i];
		if(ar[i]>prevLarge && ar[i]!=large) prevLarge=ar[i];
	}
	cout<<"2nd largest: "<<prevLarge<<endl;
	cout<<"2nd smallest: "<<prevSmall<<endl;

}

int main(){
	vector<int>ar={4,5,0,7,19,12};
	vector<int>arr={-1,-2,-3,4,0};
	//cout<<"second smallest: "<<sortAsc(arr)<<endl;
	//cout<<"second largest: "<<sortDesc(arr)<<endl;

  getSecond(arr);
  }
	
