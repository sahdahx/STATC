#include <iostream>
using namespace std;

int reverse_number(int n, int result = 0) {
    if (n == 0)
        return result;
    else
        return reverse_number(n / 10, result * 10 + n % 10);
}

int main() {
    // Program membalik bilangan
    int number;
    cout << "Masukkan bilangan: ";
    cin >> number;
    int reversed_number = reverse_number(number);
    cout << "Bilangan setelah dibalik: " << reversed_number << endl;

    return 0;
}

