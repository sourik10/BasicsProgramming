#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cin >> num;
    originalNum = num;

    while (originalNum != 0) { 
        // remainder contains the last digit
        remainder = originalNum % 10;  // (1%10)=1
        
        result += remainder * remainder * remainder; //0+(3*3*3)+(5*5*5*)+(1*1*1)
        //=27+125+1=152+1=153
        
        // removing last digit from the orignal number
        originalNum /= 10;  //1/10=0
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
