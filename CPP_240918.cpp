#include <iostream>
using namespace std;

int main() {
	// Struktur satu kondisi
	int nilai;
	cout << "Masukkan sebuah bilangan bulat : ";
	cin >> nilai;
	if (nilai>0)
	cout << "Nilai adalah bilangan positif \n";
	
	// Struktur satu kondisi
	int bilangan;
	char huruf;
	
	cout << "Masukkan sebuah bilangan bulat : ";
	cin >> bilangan;
	if ((bilangan > 0) && (bilangan < 10))
	cout << bilangan << "lebih besar dari nol dan " \ 
						"lebih kecil dari sepuluh \n";
	
	cout << "Masukkan sebuah huruf : ";
	cin >> huruf;
	if ( (huruf == 'A') || (huruf == 'a') ||
		 (huruf == 'I') || (huruf == 'i') ||
		 (huruf == 'U') || (huruf == 'u') ||
		 (huruf == 'E') || (huruf == 'e') ||s
		 (huruf == 'O') || (huruf == 'o') ){
	cout << "huruf berhasil dikenali \n";
	cout << huruf << " adalah salah satu huruf vokal \n";
	}
	return 0;


}

