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

//octal to decimal
int octalDecimal(int n){
    int dec=0,i=0;
    while(n){
        int rem=n%10;
        dec+=rem*pow(8,i++);
        n/=10;
    }
    return dec;
}

//decimal to Octal
string decimalOctal(int n){
    string str="";
    while(n){
        str.push_back(n%8);
        n/=8;
    }
    for(int i=0;i<str.size()/2;i++) swap(str[i],str[str.size()-1-i]);
    return str;
}
