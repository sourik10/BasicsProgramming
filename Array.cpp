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
