#include <iostream>

using namespace std;

long long decimalToBinary(int decimal) {
    if (decimal == 0) {
        return 0;
    }
    
    
    return (decimal % 2) + 10 * decimalToBinary(decimal / 2);
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    long long binary = decimalToBinary(decimal);
    
    cout << "Binary equivalent: " << binary << endl;
    
    return 0;
}
