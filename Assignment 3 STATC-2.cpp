#include <iostream>
using namespace std;

int main() {
	int bulan;
	int tanggal;
	cout << "(1) Januari\n" << "(2) Februari\n" << "(3) Maret\n" << "(4) April\n" << "(5) Mei\n" << "(6) Juni\n" << "(7) Juli\n" << "(8) Agustus\n" << "(9) September\n" << "(10) Oktober\n" << "(11) November\n" << "(12) Desember\n";
    cout << "Masukkan kode bulan (1-12): ";
    cin >> bulan;

    if (bulan < 1 || bulan > 12) {
        cout << "Bulan tidak valid!";
        return 0;
    }

    cout << "Masukkan tanggal: ";
    cin >> tanggal;

    if ((bulan == 12 && tanggal > 21 && tanggal <= 31) || (bulan == 1 && tanggal <= 19)) {
        cout << "Zodiak: Capricorn";
    } 
    else if ((bulan == 1 && tanggal > 19 && tanggal <= 31) || (bulan == 2 && tanggal <= 18)) {
        cout << "Zodiak: Aquarius";
    } 
    else if ((bulan == 2 && tanggal > 18 && tanggal <= 29) || (bulan == 3 && tanggal <= 20)) {
        cout << "Zodiak: Pisces";
    }     
    else if ((bulan == 3 && tanggal > 20 && tanggal <= 31) || (bulan == 4 && tanggal <= 19)) {
        cout << "Zodiak: Aries";
    } 
    else if ((bulan == 4 && tanggal > 19 && tanggal <= 30) || (bulan == 5 && tanggal <= 20)) {
        cout << "Zodiak: Taurus";
    } 
    else if ((bulan == 5 && tanggal > 20 && tanggal <= 31) || (bulan == 6 && tanggal <= 20)) {
        cout << "Zodiak: Gemini";
    } 
    else if ((bulan == 6 && tanggal > 20 && tanggal <= 30) || (bulan == 7 && tanggal <= 22)) {
        cout << "Zodiak: Cancer";
    } 
    else if ((bulan == 7 && tanggal > 22 && tanggal <= 31) || (bulan == 8 && tanggal <= 22)) {
        cout << "Zodiak: Leo";
    } 
    else if ((bulan == 8 && tanggal > 22 && tanggal <= 31) || (bulan == 9 && tanggal <= 22)) {
        cout << "Zodiak: Virgo";
    } 
    else if ((bulan == 9 && tanggal > 22 && tanggal <= 30) || (bulan == 10 && tanggal <= 22)) {
        cout << "Zodiak: Libra";
    } 
    else if ((bulan == 10 && tanggal > 22 && tanggal <= 31) || (bulan == 11 && tanggal <= 21)) {
        cout << "Zodiak: Scorpio";
    } 
    else if ((bulan == 11 && tanggal > 21 && tanggal <= 30) || (bulan == 12 && tanggal <= 21)) {
        cout << "Zodiak: Sagitarius";
    }
    else {
        cout << "Zodiak tidak ditemukan!";
    }
    return 0;
}
