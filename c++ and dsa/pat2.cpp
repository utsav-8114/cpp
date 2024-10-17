#include <iostream>
using namespace std;

int main() {
    int n;  // The number of rows for the triangle

    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer for loop to iterate through each row
    for (int i = 1; i <= n; i++) {
        // Inner for loop to print spaces for the current row
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Inner for loop to print asterisks for the current row
        for (int k = 1; k <= i; k++) {
            cout << "*"<<" ";
        }
        cout << endl;  // Move to the next line after printing a row
    }

    return 0;
}
