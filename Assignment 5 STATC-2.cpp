#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan angka: ";
    cin >> N;
    
    int arr[32], i = 0, temp = N;

    while (temp > 0) {
        arr[i++] = temp % 2;
        temp /= 2;
    }

    cout << "Bilangan biner dari " << N << " adalah: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }

    cout << endl;
    return 0;
}

