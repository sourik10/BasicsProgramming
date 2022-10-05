//spiral matrix,time complexity = O(row*column)
void spiralOrderMatrix(int a[4][4]){
    int row=4,col=4;
    int left=0,right=col-1,top=0,bottom=row-1;
    while(left<=right && top<=bottom){
        
        for(int i=left;i<=right;i++){  //first row
            cout<<a[top][i]<<" ";
        }
        top++;
        
        for(int i=top;i<=bottom;i++){  //last column
            cout<<a[i][right]<<" ";
        }
        right--;
        
        if(top<=bottom) {
            for(int i=right;i>=left;i--){  //last row
            cout<<a[bottom][i];
            }
        bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){  //first column
            cout<<a[i][left]<<" ";
            }                      
        left++;
        }
    }
}

//search in matrix ,time complexity = O(n*n)
void search(int ar[4][4],int k){
    bool flag=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(ar[i][j]==k){
                cout<<"Element is found at ("<< i<<", "<< j<<") position"<<endl;
                flag=1;
                break;
            }
        }
    }
    if(flag==0) cout<<"element not found"<<endl;
}

//find median in rowwise sorted matrix
#include<bits/stdc++.h>
using namespace std;

int main() {
    int r=3,c=3;
    int mat[r][c] = { {1, 3, 5}, 
                      {2, 6, 9}, 
                      {3, 6, 9} };
    int size=r*c,x=0;
    int ar[size];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ar[x++]=mat[i][j];
        }
    }
    sort(ar,ar+size);
    if(size%2) cout<<ar[size/2]<<endl;
    else cout<<(ar[size/2] + ar[(size/2)-1])/2<<endl;
}

//row with maximum no of 1's
int rowMaxOnes(int mat[4][4]){
 int maxCount=INT_MIN,index=-1,count=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(mat[i][j]==1) count++;
        }
        if(count>maxCount){
            maxCount=count;
            index=i;
        }
    }
    return index;
}

//rotate a matrix by 90 degree
void rotateBy90(int mat[4][4]){
    
    int n=4;
    //transpose of a matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    
    //reverse each row
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(mat[i][j],mat[i][n-j-1]);
        }
    }
}

