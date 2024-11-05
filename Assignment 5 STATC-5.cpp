#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah bilangan: ";
    cin >> N;

    if (N <= 0) {
        cout << "Jumlah bilangan harus lebih dari 0!" << endl;
        return 1;
    }

    int arr[N];
    cout << "Masukkan " << N << " bilangan bulat: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int j = 1; j <= 100; j++) {
        bool ditemukan = false;
        for (int i = 0; i < N; i++) {
            if (arr[i] == j) {
                ditemukan = true;
                break;
            }
        }

        if (!ditemukan) {
            cout << "Bilangan bulat positif terkecil yang tidak ada dalam array: " << j << endl;
            break;
        }
    }

    return 0;
}

