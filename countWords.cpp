#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {

        if (sentence[i] == ' ' || i == sentence.length() - 1) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

