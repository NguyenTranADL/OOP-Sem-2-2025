#include <iostream>
using namespace std;

extern void print_binary_str(std::string decimal_number);

int main() {
    string input;
    cout << "Enter a decimal number: " << endl;
    cin >> input;

    print_binary_str(input);
    return 0;
}