#include <iostream>
using namespace std;

void print_binary_str(std::string decimal_number) {

    string binary = " ";
    int num = stoi(decimal_number);
    if ( num == 0) cout << "0" << endl;
    while ( num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    cout << binary << endl;
}