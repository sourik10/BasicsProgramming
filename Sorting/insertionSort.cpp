//insertion sort,time O(n*n)
void insertionSort(int ar[],int n){
    for(int i=1;i<n;i++){
        int current=ar[i];
        int j=i-1;
        while(j>=0 && ar[j]>current){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=current;
    }
}
