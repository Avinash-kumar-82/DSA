/*
1 
2 3 
4 5 6 
7 8 9 10 
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines n: ";
    cin >> n;

    int num = 1; // to keep track of the next number to print

    for (int i = 1; i <= n; i++) {       // i = row number
        for (int j = 1; j <= i; j++) {   // j = numbers in current row
            cout << num << " ";
            num++;                        // increment for next number
        }
        cout << endl;
    }

    return 0;
}
