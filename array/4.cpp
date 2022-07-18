#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//https://takeuforward.org/data-structure/reverse-a-given-array/
//bruteForce approach - using extra array of size n(Same size)
//time O(n),space O(n)


//better approach (iterative),time O(n),space O(1)
void reverseAr(vector<int>&ar){
	int s=0,e=ar.size()-1;
	while(s<e){
		swap(ar[s],ar[e]);
		s++,e--;
	}
	printAr(ar);
}

//better appraoch (recursive approach), time O(n), space O(1)
void revereseRec(vector<int>&ar,int start,int end){
	if(start < end){
		swap(ar[start],ar[end]);
		revereseRec(ar,start+1,end-1);
	}
  printAr(ar);
}

int main(){
	vector<int>ar={4,5,0,7,19,12,8};
	vector<int>arr={-1,-2,-3,4,0};

	//reverse(ar.begin(),ar.end()); //cpp stl reverseFunction
	//printAr(ar);
	
	//reverseAr(ar);
	revereseRec(arr,0,arr.size()-1);
	

}
	
