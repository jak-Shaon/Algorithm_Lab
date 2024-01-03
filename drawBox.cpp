#include <iostream>

using namespace std;

void drawBox(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        drawBox(n);
    }
    return 0;
}

