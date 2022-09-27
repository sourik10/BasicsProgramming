//sorting algorithms

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

//selection sort,time O(n*n),space O(1)
void selectionSort(int ar[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[mini]) mini=j;
        }
        swap(ar[mini],ar[i]);
       // int tmp=ar[mini];
        //ar[mini]=ar[i];
        //ar[i]=tmp;
    }
}

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

//quick sort
//merge sort


//searching algorithms
//binary search vs linear search
//https://www.geeksforgeeks.org/linear-search-vs-binary-search/

//linearSearch,O(n)
int linearSearch(int ar[],int n,int k){
   for(int i=0;i<n;i++){
      if(ar[i]==k) return i;
   }
   return -1;
}

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


