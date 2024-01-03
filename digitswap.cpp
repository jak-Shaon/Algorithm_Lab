#include <iostream>
using namespace std;

int main() {
  int code;
  cin >> code;

  int first_digit = code / 10;
  int second_digit = code % 10;

  int swapped_code = second_digit * 10 + first_digit;

  cout << swapped_code << endl;
  return 0;
}
