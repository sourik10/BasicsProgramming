//bubble sort,time O(n^2),space O(1)
void bubbleSort(int ar[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(ar[j]>ar[j+1]){
                int tmp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=tmp;
            }
        }
    }
}
