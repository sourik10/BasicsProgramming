#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//https://takeuforward.org/arrays/calculate-sum-of-the-elements-of-the-array/
int main(){

	vector<int>arr = {8, 7, 1, 6, 5, 9};
	int n = arr.size(),sum=0;
	for(int i=0;i<n;i++) sum+=(double)arr[i];
	cout<<sum<<endl;
	int s=0;cout<<accumulate(arr.begin(),arr.end(),s); //cpp stl

}
	
