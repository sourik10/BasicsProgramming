#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//https://takeuforward.org/data-structure/find-median-of-the-given-array/
//median in an array
//time O(n),space O(1)

void median(vector<int>&arr){
	int n=arr.size();
	sort(arr.begin(),arr.end());
	if(n%2){
		cout<<arr[n/2]<<endl;
	}
	else{
		cout<<double(arr[(n/2)-1] + arr[n/2])/2<<endl;
	}
}

int main(){
	vector<int>arr = {4,7,1,2,7,7};
	int n=arr.size();
	median(arr);

}
	
