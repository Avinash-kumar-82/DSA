#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number of lines n: ";
    cin >> n;

    // Validate odd number
    if (n % 2 == 0) {
        cout << "Please enter an odd number!" << endl;
        return 0;
    }

    int up = (n + 1) / 2;   // Upper part lines
    int low = n - up;       // Lower part lines

    // Upper half
    for (int i = 0; i < up; i++) {
        for (int j = 0; j < up - i - 1; j++) {
            cout << " ";
        }
        cout << "*";

        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = low - 1; i >= 0; i--) {
        for (int j = 0; j < up - i - 1; j++) {
            cout << " ";
        }
        cout << "*";

        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
