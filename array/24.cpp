#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//binary search,time O(log n),space O(1)
//search for an element in a sorted array

int main(){
	int n = 6;
	int arr[n] = {6, 7, 9, 5, 3, 10};
	int k = 10;
	int l=0,h=n-1;
	int ans=-1;
	while(l<=h){
		int mid=(l+h)/2;
		if(k<arr[mid]){
			h=mid-1;
		}
		else if(k > arr[mid]){
			l=mid+1;
		}
		else {
			ans=mid;
			break;
		}
	}
	cout<<ans<<endl;
	
}
	
