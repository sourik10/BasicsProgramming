#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//https://takeuforward.org/data-structure/rotate-array-by-k-elements-block-swap-algorithm/
void printAr(vector<int>&ar){
	for(int i=0;i<ar.size();i++) cout<<ar[i]<<" ";
}

//better apparoch using reverseFunction 
//time O(n),space O(1)
void reverse(vector<int>&ar,int low,int high){
	while(low < high){
		swap(ar[low],ar[high]);
		low++;
		high--;
	}
}

int main(){

	vector<int>arr = {1,2,3,4,5,6,7};
	int n=arr.size();
	int k=3;
	k=k%n;
  
	reverse(arr,0,k-1);
	reverse(arr,k,n-1);
	reverse(arr,0,n-1);
	printAr(arr);

}
	
