//remove duplicate elements from unsorted array
//time O(n),space O(1)

#include<bits/stdc++.h>
vector<int> removeDuplicates(vector<int> arr) {
   unordered_map<int,bool>dup;
   vector<int>ans;
   int n = arr.size();
for(int i=0;i<n;i++){
 if(dup.count(arr[i])==true) continue;
else{
    dup[arr[i]]=true;
 ans.push_back(arr[i]);
}
}

return ans;
}
