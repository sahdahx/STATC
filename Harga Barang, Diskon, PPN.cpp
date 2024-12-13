#include <iostream>
using namespace std;

// menghitung total belanja
float hitungTotal(float hargaBarang[], int jumlahBarang) {
    float total = 0;
    for (int i = 0; i < jumlahBarang; i++) {
        total += hargaBarang[i];
    }
    return total;
}

// menghitung diskon
float hitungDiskon(float total, float diskonPersen) {
    return total * (diskonPersen / 100);
}

// menghitung harga setelah diskon
float hitungTotalSetelahDiskon(float total, float diskon) {
    return total - diskon;
}

// menghitung PPN
float hitungPPN(float total, float PPNPersen) {
    return total * (PPNPersen / 100);
}

int main() {
    int jumlahBarang;
    float diskonPersen, PPNPersen;

    cout << "Masukkan jumlah barang: ";
    cin >> jumlahBarang;

    float hargaBarang[jumlahBarang];
    for (int i = 0; i < jumlahBarang; i++) {
        cout << "Masukkan harga barang ke-" << (i + 1) << ": ";
        cin >> hargaBarang[i];
    }

    cout << "Masukkan persentase diskon: ";
    cin >> diskonPersen;

    cout << "Masukkan persentase PPN: ";
    cin >> PPNPersen;

	//menghitung total belanja, diskon, dan PPN
    float totalBelanja = hitungTotal(hargaBarang, jumlahBarang);
    float diskon = hitungDiskon(totalBelanja, diskonPersen);
    float totalSetelahDiskon = hitungTotalSetelahDiskon(totalBelanja, diskon);
    float PPN = hitungPPN(totalSetelahDiskon, PPNPersen);
    float totalAkhir = totalSetelahDiskon + PPN;

    cout << "Total belanja sebelum diskon: " << totalBelanja << endl;
    cout << "Diskon: " << diskon << endl;
    cout << "Total setelah diskon: " << totalSetelahDiskon << endl;
    cout << "PPN: " << PPN << endl;
    cout << "Total akhir: " << totalAkhir << endl;

    return 0;
}
