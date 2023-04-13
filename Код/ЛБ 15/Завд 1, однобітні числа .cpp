#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

int main() {
    // Однобайтні числа
    unsigned char num1 = 92;   // 01011100
    unsigned char num2 = 57;   // 00111001
    signed char num3 = -79;    // 10110001 (знаковий розряд: 1, значення: 0110001)

    // Перетворення у двійкову систему числення
    bitset<8> bin1(num1);
    bitset<8> bin2(num2);
    bitset<8> bin3(num3);

    cout << "92 in binary: " << bin1 << endl;
    cout << "57 in binary: " << bin2 << endl;
    cout << "-79 in binary: " << bin3 << endl;

    // Перетворення у вісімкову систему числення
    cout << "92 in octal: " << oct << static_cast<int>(num1) << endl;
    cout << "57 in octal: " << oct << static_cast<int>(num2) << endl;
    cout << "-79 in octal: " << oct << static_cast<int>(num3) << endl;

    // Перетворення у шістнадцяткову систему числення
    cout << "92 in hexadecimal: " << hex << static_cast<int>(num1) << endl;
    cout << "57 in hexadecimal: " << hex << static_cast<int>(num2) << endl;
    cout << "-79 in hexadecimal: " << hex << static_cast<int>(num3) << endl;

    return 0;
}
