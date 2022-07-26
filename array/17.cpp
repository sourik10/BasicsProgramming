#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//https://takeuforward.org/data-structure/maximum-product-subarray-in-an-array/
//kadane algorithm
//time O(n),space O(1)
int maxProduct(vector<int>&nums){
	int p1=nums[0],p2=nums[0],result=nums[0];
	for(int i=1;i<nums.size();i++){
		p1= max({nums[i],p1*nums[i],p2*nums[i]});
		p2= min({nums[i],p1*nums[i],p2*nums[i]});
		result=max(result,p1);
	}
	return result;
}
int main(){

	vector<int>arr = {1,2,-3,0,-4,-5};
	cout<<maxProduct(arr);
	
}
	
