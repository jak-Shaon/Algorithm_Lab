#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int first_digit = n / 10000;
    int last_digit = n % 10;
    int sum = first_digit + last_digit;
    cout << sum << endl;
    return 0;
}

