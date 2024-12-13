#include <iostream>
using namespace std;

int main() {
    int n;

    // a. Masukkan berapa banyak data yang akan diurutkan
    cout << "Masukkan banyak_data: ";
    cin >> n;
    int data[n], salinan_data[n];

    // b. Buatlah random data
    for (int i = 0; i < n; i++) {
        data[i] = rand() % 1000;    // Nilai acak antara 0 dan 999
        salinan_data[i] = data[i]; 
    }

    // c. Urutkan data secara ascending dengan menggunakan metode insertion_sort
    auto mulai = clock();
    for (int i = 1; i < n; i++) {
        int kunci = data[i];
        int j = i - 1;
        while (j >= 0 && data[j] > kunci) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = kunci;
    }
    auto selesai = clock();
    cout << "Waktu Insertion_Sort Ascending: " << double(selesai - mulai) / CLOCKS_PER_SEC << " detik\n";

    // d. Urutkan data secara descending dengan menggunakan metode insertion_sort
    for (int i = 0; i < n; i++) data[i] = salinan_data[i];
    mulai = clock();
    for (int i = 1; i < n; i++) {
        int kunci = data[i];
        int j = i - 1;
        while (j >= 0 && data[j] < kunci) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = kunci;
    }
    selesai = clock();
    cout << "Waktu Insertion_Sort Descending: " << double(selesai - mulai) / CLOCKS_PER_SEC << " detik\n";

    // e. Urutkan data secara ascending dengan menggunakan metode selection_sort
    for (int i = 0; i < n; i++) data[i] = salinan_data[i];
    mulai = clock();
    for (int i = 0; i < n - 1; i++) {
        int indeks_min = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[indeks_min]) {
                indeks_min = j;
            }
        }
        int sementara = data[indeks_min];
        data[indeks_min] = data[i];
        data[i] = sementara;
    }
    selesai = clock();
    cout << "Waktu Selection_Sort Ascending: " << double(selesai - mulai) / CLOCKS_PER_SEC << " detik\n";

    // f. Urutkan data secara descending dengan menggunakan metode selection_sort
    for (int i = 0; i < n; i++) data[i] = salinan_data[i];
    mulai = clock();
    for (int i = 0; i < n - 1; i++) {
        int indeks_max = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] > data[indeks_max]) {
                indeks_max = j;
            }
        }
        int sementara = data[indeks_max];
        data[indeks_max] = data[i];
        data[i] = sementara;
    }
    selesai = clock();
    cout << "Waktu Selection_Sort Descending: " << double(selesai - mulai) / CLOCKS_PER_SEC << " detik\n";

    return 0;
}

