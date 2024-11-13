#include <iostream>
using namespace std;

int ackermann(int m, int n) {
    if (m == 0)
        return n + 1;
    else if (m > 0 && n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    int m, n;
    cout << "Masukkan nilai m: ";
    cin >> m;
    cout << "Masukkan nilai n: ";
    cin >> n;
    int result = ackermann(m, n);
    cout << "Hasil dari fungsi Ackermann a(" << m << ", " << n << ") adalah: " << result << endl;

    return 0;
}

