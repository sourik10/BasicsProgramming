//evenOdd check
string evenOddCheck(int num){
    if(num%2) return "Odd";
    return "Even";
}

//sum of first n natural numbers
int sumUptoN(int n){
   // return n*(n+1)/2;
    if(n==1) return 1;
    return n + sumUptoN(n-1);
}

//sum within a range
int sumRange(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=i;
    }
    return sum;
}

//greatest among 3numbers
int maxOf3(int a,int b,int c){
    int tmp=a>b?a:b;
    int res=tmp>c?tmp:c;
    return res;
}

//leap year check
string leapYear(int yr){
    if((yr%400)==0 || (yr%4==0 && yr%100!=0)) return "leap year";
    return "not a leap year";
}

//prime number check
string checkPrime(int n){
    bool isprime=true;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime) return "prime";
    return "not prime";
}

//prime number within an range(a,b)
bool checkPrime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
   int a=10,b=20;
   for(int i=a;i<=b;i++){
       if(checkPrime(i)) cout<<i<<endl;
   }
}

//sum of digits 
int sumDigits(int n){
    int sm=0;
    while(n){
        sm+=(n%10);
        n/=10;
    }
    return sm;
}

//reverse of number
int reverse(int n){
    int rv=0;
    while(n){
        rv=(10*rv)+(n%10);
        n/=10;
    }
    return rv;
}

//palindrome of a string
bool palindrome(string s){
    string tmp=s;
    int l=0,h=s.length()-1;
    while(l<=h){
    	swap(s[l],s[h]);
    	l++;
    	h--;
    }
    if(tmp==s) return true;
    else return false;
}






