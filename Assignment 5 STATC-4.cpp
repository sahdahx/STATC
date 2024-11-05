#include <iostream>
using namespace std;

int main() {
 	int matriks1[2][2], matriks2[2][2];
 	cout << "Masukkan bilangan ke dalam matriks 1 : " << endl;
 	for (int i = 1; i <= 2; i++) {
 		for (int j = 1; j <= 2; j++) {
 		cout << "Masukkan bilangan A" << i << j << " : ";
 		cin >> matriks1[i][j];
 		}
 	}
 	cout << endl;
 	cout << "Masukkan bilangan ke dalam matriks 2 : " << endl; 
 	for (int i = 1; i <= 2; i++) {
 		for (int j = 1; j <= 2; j++) {
 		cout << "Masukkan bilangan B" << i << j << " : ";
 		cin >> matriks2[i][j];
 		}
	}
	cout << endl;
	cout << "Matriks 1 :" << endl;
 	for (int i = 1; i <= 2; i++) {
		for (int j = 1; j <= 2; j++) {
			cout << matriks1[i][j] << " ";
		}
		cout << endl;
 	}
 	cout << endl;
 	cout << "Matriks 2 :" << endl;
 	for (int i = 1; i <= 2; i++) {
		for (int j = 1; j <= 2; j++) {
			cout << matriks2[i][j] << " ";
		}
		cout << endl;
 	}
 	cout << endl;
 	cout << "Hasil perkalian matriks 1 dan matriks 2 :" << endl;
	int matriks3[2][2];
	matriks3[1][1] = matriks1[1][1] * matriks2[1][1] + matriks1[1][2] * matriks2[2][1]; 
	matriks3[1][2] = matriks1[1][1] * matriks2[1][2] + matriks1[1][2] * matriks2[2][2]; 
	matriks3[2][1] = matriks1[2][1] * matriks2[1][1] + matriks1[2][2] * matriks2[2][1];
	matriks3[2][2] = matriks1[2][1] * matriks2[1][2] + matriks1[2][2] * matriks2[2][2];   
	for (int i = 1; i <= 2; i++) {
		for (int j = 1; j <= 2; j++) {
			cout << matriks3[i][j] << " ";
		} cout << endl;
	}
 	return 0; 
}
