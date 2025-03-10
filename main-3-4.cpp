#include <iostream>

using namespace std;

extern void print_pass_fail(char grade);

int main() {
    print_pass_fail('A');
    print_pass_fail('B');
    print_pass_fail('C');
    print_pass_fail('D');
    print_pass_fail('E');
    print_pass_fail('F');
    print_pass_fail('X');
    
    return 0;
}
