#include <iostream>
using namespace std;

int main() {
    int max;
    cout << "Insert the maximum number to calculate the multiplication table: ";
    cin >> max;

    // Cetak header tabel
    cout << "   "; 
    for (int i = 0; i <= max; i++) {
        cout << i << " "; 
    }
    cout << endl;

    // Cetak baris-baris tabel
    for (int i = 0; i <= max; i++) {
        cout << i << " - "; 
        for (int j = 0; j <= max; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}
