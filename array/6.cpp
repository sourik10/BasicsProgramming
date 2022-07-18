#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//time = O(nlogn) + O(n) 
//space = O(1)

int main(){
	vector<int>arr = {8, 7, 1, 6, 5, 9};
	int n = arr.size();
	sort(arr.begin(), arr.end());

	for(int i=0;i<n/2;i++) cout<<arr[i]<<" ";
	for(int i=n-1;i>=n/2;i--) cout<<arr[i]<<" ";
}
	
