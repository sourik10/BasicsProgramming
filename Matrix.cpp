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



