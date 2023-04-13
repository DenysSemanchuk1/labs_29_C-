#include <iostream>
#include <bitset> // для перетворення в двійкову систему числення
using namespace std;

int main() {
    short int a = 12854;
    short int b = 8612;
    short int c = -5896;

    // перетворення чисел у двійкову систему
    bitset<16> a_bin(a);
    bitset<16> b_bin(b);
    bitset<16> c_bin(c);

    // виведення чисел у двійковій системі
    cout << "12854 in binary: " << a_bin << endl;
    cout << "8612 in binary: " << b_bin << endl;
    cout << "-5896 in binary: " << c_bin << endl;

    // виведення чисел у вісімковій системі
    cout << "12854 in octal: " << oct << a << endl;
    cout << "8612 in octal: " << oct << b << endl;
    cout << "-5896 in octal: " << oct << c << endl;

    // виведення чисел у шістнадцятковій системі
    cout << "12854 in hexadecimal: " << hex << a << endl;
    cout << "8612 in hexadecimal: " << hex << b << endl;
    cout << "-5896 in hexadecimal: " << hex << c << endl;

    return 0;
}
