//1
#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    int cube;
    for(int i=1;i*i*i<=n;i++){
        cube=i*i*i;
        if(cube==n) return true;
    }
    return false;
}
int main() {
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    int ct=0;
    for(int i=0;i<n;i++) if(check(ar[i])) ct++;
    cout<<ct<<endl;

    return 0;
}

//2
#include<bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int>& nums, int& target) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++) v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int s=0,e=v.size()-1;
        while(s<e){
            int sum=v[s].first+v[e].first;
            if(sum == target) return {v[s].second,v[e].second};
            if(sum < target) s++;
            else e--;
        }
        return {-1,-1};
}
int main() {
    int n;cin>>n;
    int target;cin>>target;
    vector<int>ar;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        ar.push_back(t);
    }
    vector<int>ans;
    ans=solution(ar,target);
    for(auto it:ans) cout<<it<<" ";
  
    /*
    bruteforce approach
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]+ar[j]==target) cout<<i<<" "<<j<<endl;
        }
    } 
    */

}


//3
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;cin>>n>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        int t;cin>>t;
       sum=sum+(t/k);
    }
    cout<<sum<<endl;

}

//4
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        v.push_back(t);
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) ans.push_back(v[i]);
    }
    for(int i=0;i<n;i++){
        if(v[i]%2) ans.push_back(v[i]);
    }
    for(auto it:ans) cout<<it<<" ";

}

//5
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    int d;cin>>d;
    int ct=0;
    while(n){
        int rem=n%10;
        n/=10;
        if(rem==d) continue;
        else ct++;
    }
    cout<<ct<<endl;
}

//6
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    int ct=0;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        if(t>0) ct++;
    }
    cout<<ct<<endl;

}

//7
// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int digitSum(int n){
    int sum=0;
    while(n){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int main() {
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        cout<<digitSum(t)<<" ";
    }

}

//8
#include<bits/stdc++.h>
using namespace std;

int main() {
   int n;cin>>n;
   string str=to_string(n);
   for(int i=0;i<str.length();i++){
       if(str[i]%2) --str[i];
       else ++str[i];
   }
   cout<<stoi(str)<<endl;
}
