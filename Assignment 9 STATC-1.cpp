#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah bilangan: ";
    cin >> N;
    int arr[N];
    cout << "Masukkan bilangan: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    // Menghitung median
    if (N % 2 == 0) {
        cout << "Median: " << (arr[N / 2 - 1] + arr[N / 2]) / 2.0;
    } else {
        cout << "Median: " << arr[N / 2];
    }

    return 0;
}

