void squarePattern(int n){
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cout<<"*"<<" ";
       }
       cout<<endl;
   }
}

void HollowSquareStarPattern(int n){
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i==0 || i==n-1 || j==0 || j==n-1) cout<<"*";
           else cout<<" ";
       }
       cout<<endl;
   }
}

void rhombus(int n){
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<i;j++){ //spcaes
            cout<<" ";
        }
        for(int j=0;j<n;j++){ //star print
            cout<<"*";
        }
        cout<<endl;
    }
}

void mirrorrhombus(int n){
    for(int i=0;i<n;i++) 
    {
       for(int j=n;j>i;j--){
           cout<<" ";
       }
        for(int j=0;j<n;j++){ //star print
            cout<<"*";
        }
        cout<<endl;
    }
}

