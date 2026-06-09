// An Armstrong number is that that is equal to the sum of its own digits each raised to the power of the number of digits.
#include <iostream>
#include <cmath>    
using namespace std;
int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // store the number of digits of num in n
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    // calculate the sum of the nth power of its digits
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    // display the result
    if (round(result) == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}