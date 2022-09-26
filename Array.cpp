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

