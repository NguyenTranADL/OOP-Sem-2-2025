#include <iostream>
#include <algorithm>

using namespace std;

string decToBi(int num) {
    if (num == 0) {
        return "0";
    }

    string binary = "";
    while ( num > 0) {
        binary += to_string( num % 2);
        num /= 2;   
    }
    return binary;
} 

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    string binary = decToBi(num);
    cout << "Binary representation: " << binary << endl;

    return 0;
}