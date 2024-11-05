#include <iostream>
using namespace std;
int main() {
	int M;
 	cout << "Masukkan banyak bilangan : ";
 	cin >> M;
 	if (M <= 0) {
 		cout << "Banyak bilangan harus lebih dari 0!" << endl;
 		return 1;
 	}
 	int array1[M], array2[M];
 	cout << "Masukkan bilangan asli sebanyak " << M << " untuk himpunan A : " << endl;
 	for (int i = 1; i <= M; i++) {
 		cout << "Masukkan bilangan A" << i << " : ";
 		cin >> array1[i];
 	}
 	cout << "Masukkan bilangan asli sebanyak " << M << " untuk himpunan B : " << endl; 
 	for (int j = 1; j <= M; j++) {
 		cout << "Masukkan bilangan B" << j << " : ";
 		cin >> array2[j];
	}
	cout << "Interseksi dari kedua himpunan :" << endl;
 	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= M; j++) {
			if (array1[i] == array2[j]) {
				cout << array1[i] << endl;
				break;
			} 
		}
 	}
 	return 0; 
}

