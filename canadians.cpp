#include <iostream>
#include <string>
using namespace std;

int main() {
  string sentence;
  getline(cin, sentence);

  if (sentence.length() >= 3 && sentence.substr(sentence.length() - 3) == "eh?") {
    cout << "Canadian!" << endl;
  } else {
    cout << "Imposter!" << endl;
  }

  return 0;
}
