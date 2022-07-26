#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//optimised approach 
//sort the array 
//current !=prev and current!=next -->current is a non repreating 
//time O(n log n) + O(n)
//space O(n)
void findNonRepeatingElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());//sorting array
    
    //handling first element of the array.
    if(nums[0] != nums[1]) cout<<nums[0]<<" ";
    
    for(int i=1;i<nums.size()-1;i++) 
       if(nums[i-1] != nums[i] && nums[i] != nums[i+1]) cout<<nums[i]<<" ";
       
    //handling last element of the array
    if(nums[nums.size()-2] != nums[nums.size()-1]) cout<<nums[nums.size()-1];
}
int main(){

	vector<int>arr = {1,1,2,3,4,4,5,2};
  
  //best approach 
  //using hashmap , time O(n),space O(n)
	unordered_map<int,int>mp;
	for(auto it:arr){
		mp[it]++;
	}
	cout<<"non-repeating elements are: "<<endl;
	for(auto it:mp){
		if(it.second == 1) cout<< it.first<<" ";
	}
	cout<<endl;
	findNonRepeatingElement(arr);

}
	
