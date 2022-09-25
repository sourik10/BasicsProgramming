//binary to decimal
int binaryDecimal(string str){
    int ans=0,base=1;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]=='1') ans+=base;
         base*=2;
    }
    return ans;
}

//decimal to binary
string decimalBinary(int n){
    string ans="";
    while(n){
        if(n%2==1) ans.push_back('1');
        else ans.push_back('0');
        n/=2;
    }
    for(int i=0;i<ans.size()/2;i++) swap(ans[i],ans[ans.size()-i-1]);
    return ans;
}

