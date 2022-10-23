//binarySearch,O(log n)
int binarySearch(int ar[],int n,int k){
   int l=0,h=n-1;
   while(l<=h){
      int mid=(l+h)/2;
      if(ar[mid]==k) return mid;
      else if(ar[mid]<k) l=mid+1;
      else h=mid-1;
   }
   return -1;
}
