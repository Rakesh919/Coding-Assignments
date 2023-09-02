#include <iostream>

using namespace std;

int binaryToDecimal(long long binary, int position = 0) {
    if (binary == 0) {
        return 0;
    }
    
    int lastDigit = binary % 10;
    int decimalValue = lastDigit * (1 << position);
    
    return decimalValue + binaryToDecimal(binary / 10, position + 1);
}

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    int decimal = binaryToDecimal(binary);
    
    cout << "Decimal equivalent: " << decimal << endl;
    
    return 0;
}
