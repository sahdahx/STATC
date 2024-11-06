#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, D, x1, x2, bil_riil, bil_imajiner;
    
    // Input nilai a, b, dan c
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan nilai c: ";
    cin >> c;
    
    // Menghitung Determinan (D)
    D = b*b - 4*a*c;
    cout << "Nilai determinan (D): " << D << endl;
    
    // Jika D > 0, akar riil dan berbeda
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        cout << "Karena D > 0, maka x1 dan x2 bersifat riil dan berbeda, yaitu x1 = " << x1 << " dan x2 = " << x2 << endl;
    }
    // Jika D == 0, akar riil dan sama
    else if (D == 0) {
        x1 = -b / (2*a);
        cout << "Karena D = 0, maka x1 dan x2 bersifat riil dan sama, yaitu x1 = x2 = " << x1 << endl;
    }
    // Jika D < 0, akar imajiner
    else {
        bil_riil = -b / (2 * a);
        bil_imajiner = sqrt(-D) / (2 * a);
        cout << "Karena D < 0, maka x1 dan x2 bersifat imajiner:" << endl;
        cout << "x1 = " << bil_riil << " + " << bil_imajiner << "i" << endl;
        cout << "x2 = " << bil_riil << " - " << bil_imajiner << "i" << endl;
    }

    return 0;
}

