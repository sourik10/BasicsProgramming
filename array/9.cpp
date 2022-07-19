#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//https://takeuforward.org/data-structure/average-of-all-the-elements-in-the-array/
//arrayAverage
//time O(n),space O(1)

int main(){

	vector<int>arr = {1,2,3,4,5,6,7,8};
	int n=arr.size();
	double sum=0;
	for(int i=0;i<n;i++){
		sum+=(double)arr[i];
	}
	cout<<"avg: "<<(double)(sum/n)<<endl;

}
	
