#include <iostream>
using namespace std;

// NOMOR 1
int main() {
	float jarak, kecepatan;
	cout << "Masukkan jarak: ";
	cin >> jarak;
	cout << "Masukkan kecepatan: ";
	cin >> kecepatan;
	cout << "Waktu yang ditempuh: " << jarak/kecepatan;
	return 0;
}

// NOMOR 2
int main() {
	int jam_1, jam_2, menit_1, menit_2;
	cout << "Masukkan data jam ke-1: ";
	cin >> jam_1;
	cout << "Masukkan data menit ke-1: ";
	cin >> menit_1;
	cout << "Masukkan data jam ke-2: ";
	cin >> jam_2;
	cout << "Masukkan data menit ke-2: ";
	cin >> menit_2;
	
	int selisih_jam = jam_2-jam_1;
	int selisih_menit = menit_2-menit_1;
	int hasil = selisih_jam*60 + selisih_menit;
	
	cout >> "Selisih kedua jam tersebut adalah " >> hasil >> " menit";
}


// NOMOR 3
int main() {
    int x, y;
    cout << "Masukkan dua buah bilangan: ";
    cin >> x >> y;
    cout << "Output: " << y << " " << x;
    return 0;
}

