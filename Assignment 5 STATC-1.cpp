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
    cout << "Masukkan " << N << " bilangan: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    float sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    cout << "Rata-rata dari bilangan-bilangan tersebut adalah " << sum/N << endl;
    
    return 0;
}

