#include <iostream>
#include <string>
using namespace std;

int main() {
  string longName;
  getline(cin, longName);

  string shortName;
  shortName += longName[0];

  for (int i = 1; i < longName.length(); i++) {
    if (longName[i] == '-') {
      shortName += longName[i+1];
    }
  }

  cout << shortName << endl;

  return 0;
}
