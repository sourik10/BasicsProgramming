#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int sortAsc(vector<int>&ar){
	sort(ar.begin(),ar.end());
	return ar[0];
}
int sortDesc(vector<int>&ar){
	sort(ar.begin(),ar.end());
	return ar[ar.size()-1];
}

int main(){
	vector<int>ar={4,5,0,7,19,12};
	vector<int>arr={-1,-2,-3,4,0};
	cout<<"smallest: "<<sortAsc(arr)<<endl;
	cout<<"largest: "<<sortDesc(arr)<<endl;

}
	
