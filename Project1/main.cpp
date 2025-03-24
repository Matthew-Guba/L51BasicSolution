#include <iostream>
using namespace std;

long long int find_factorial(int a);


int main() {
    int a;

    cout << "Input number of what you want factorial:" << endl;
    cin >> a;

    long long int result = find_factorial(a);

    if (result == -1) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {
        cout << "Factorial of " << a << " is " << result << endl;
    }

    return 0;
}
