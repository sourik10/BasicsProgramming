int smallest(int ar[],int n){  //smallest element
    int mini=ar[0];
    for(int i=1;i<n;i++){
        if(ar[i]<mini) mini=ar[i];
    }
    return mini;
}

int largest(int ar[],int n){  //largest element
    int maxi=ar[0];
    for(int i=1;i<n;i++){
        if(ar[i]>maxi) maxi=ar[i];
    }
    return maxi;
}

//second largest and smallest element
void secondSmallestLargest(int ar[],int n){
    int small=INT_MAX,secondSmall=INT_MAX;
    int large=INT_MIN,secondLarge=INT_MIN;
    for(int i=0;i<n;i++){
        small=min(ar[i],small);
        large=max(ar[i],large);
    }
    for(int i=0;i<n;i++){
        if(ar[i]<secondSmall && ar[i]!=small) secondSmall=ar[i];
        if(ar[i]>secondLarge && ar[i]!=large) secondLarge=ar[i];
    }
    cout<<secondSmall<<" "<<secondLarge<<endl;
}

//reverse an array
void reverse(int ar[],int n){
    int l=0,h=n-1;
    while(l<h){
        swap(ar[l++],ar[h--]);
    }
    for(int i=0;i<n;i++) cout<<ar[i]<<" ";
}

//Rearrange array in increasing-decreasing order
void sort(int ar[],int n){ //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]) swap(ar[j],ar[j+1]);
        }
    }
    
    for(int i=0;i<n/2;i++){
        cout<<ar[i]<<" ";
    }
    for(int i=n-1;i>=n/2;i--){
        cout<<ar[i]<<" ";
    }
}

//rotate by K elements
void rotateByK(vector<int>&v,int k){ //rotate by right
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    reverse(v.begin(),v.end());
}

//median of an array
double median(vector<int>&v){
    int n=v.size();
    sort(v.begin(),v.end());
    if(n%2){
        return v[n/2];
    }
    return (double)(v[n/2]+v[(n/2)-1])/2;
}

//remove duplicates from a sorted array
int removeDuplicates(vector<int>&ar){
    int n=ar.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(ar[i]!=ar[j]){
            i++;
            ar[i]=ar[j];
        }
    }
    return i+1;
}

//remove duplicates from a unsorted array
void removeDuplicatesUnsorted(vector<int>&ar){
    int n=ar.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(ar[i])==mp.end()){
            mp[ar[i]]++;
            cout<<ar[i]<<",";
        }
    }
}

//adding elements
void insertBegin(vector<int>&ar,int &k){
    int n=ar.size();
    for(int i=n-1;i>=0;i--){
        ar[i+1]=ar[i];
    }
    ar[0]=k;
}
void insertEnd(vector<int>&ar,int &k){
    int n=ar.size();
    ar[n]=k;
}



