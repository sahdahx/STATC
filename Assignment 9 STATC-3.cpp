#include <iostream>
#include <algorithm> 
#include <ctime>     
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah data yang ingin diurutkan (contoh: 100, 1000, 10000, 100000): ";
    cin >> n;

    int* data = new int[n];

    srand(time(0)); 
    for (int i = 0; i < n; i++) {
        data[i] = rand() % 1000; 
    }

    clock_t start = clock();

    sort(data, data + n);

    clock_t end = clock();

    double duration = double(end - start) / CLOCKS_PER_SEC;
    cout << "Waktu pengurutan: " << duration << " detik" << endl;

    // Menampilkan sebagian data setelah diurutkan kalau ingin melihat hasilnya
    // cout << "Data yang telah diurutkan: ";
    // for (int i = 0; i < n; i++) {
    //     cout << data[i] << " ";
    // }
    // cout << endl;

    delete[] data;
    return 0;
}

