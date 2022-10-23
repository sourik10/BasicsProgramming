//linearSearch,O(n)
int linearSearch(int ar[],int n,int k){
   for(int i=0;i<n;i++){
      if(ar[i]==k) return i;
   }
   return -1;
}
