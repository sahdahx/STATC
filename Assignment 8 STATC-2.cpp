#include <iostream>
using namespace std;

int koef_binomial(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return koef_binomial(n - 1, k - 1) + koef_binomial(n - 1, k);
}

int main() {
    int n, k;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Masukkan nilai k: ";
    cin >> k;

    int result = koef_binomial(n, k);
    cout << "Koefisien binomial dari (" << n << " choose " << k << ") adalah: " << result << endl;

    return 0;
}

