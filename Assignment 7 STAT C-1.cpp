#include <iostream>
#include <cmath>
using namespace std;

float ipk(int n, char score[], int sks[]) {
    float total_points = 0;
    int total_sks = 0;

    for (int i = 0; i < n; i++) {
        float point;
        // Konversi nilai huruf ke poin
        switch (score[i]) {
            case 'A': point = 4.0; break;
            case 'B': point = 3.0; break;
            case 'C': point = 2.0; break;
            case 'D': point = 1.0; break;
            case 'E': point = 0.0; break;
            default: point = 0.0; // Nilai tidak valid
        }
        total_points += point * sks[i];
        total_sks += sks[i];
    }
    // Menghitung IPK
    if (total_sks > 0) {
    	return total_points / total_sks;
	}
	else {
		return 0.0;
	}
}

int main() {
    int n;
    cout << "Jumlah Mata Kuliah: ";
    cin >> n;

    char score[n];
    int sks[n];

    for (int i = 0; i < n; i++) {
        cout << "Nilai Mata Kuliah ke-" << i+1 << " (A/B/C/D/E): ";
        cin >> score[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "SKS Mata Kuliah ke-" << i+1 << ": ";
        cin >> sks[i];
    }

    cout << "IPK: " << ipk(n, score, sks) << endl;
    return 0;
}

