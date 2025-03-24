#include <iostream>
using namespace std;

int fibonacci(int n);
int main() {
    int number;
    cout << "Enter the Fibonacci sequence position: ";
    cin >> number;
    if (fibonacci(number) == -1) {
        cout << "It has a mistake";
        return -1;
    }
    cout << "The Fibonacci number at position " << number << " is " << fibonacci(number) << endl;

    return 0;
}