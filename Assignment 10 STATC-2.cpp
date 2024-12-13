#include <iostream>
#include <algorithm>
using namespace std;

// binary search
int main() {
    int data[] = {10, 25, 44, 50, 41, 42, 49, 10, 15, 38, 7, 45, 12, 15, 41, 48, 40, 44, 22, 39};
    int n = 20;

    sort(data, data + n);
    int target = 25;
    int* idx = upper_bound(data, data + n, target); // Temukan elemen pertama > 25
    cout << (data + n) - idx << endl; // Hitung jumlah elemen lebih besar dari 25

    return 0;
}


//
//int main() {
//    int data[] = {10, 25, 44, 50, 41, 42, 49, 10, 15, 38, 7, 45, 12, 15, 41, 48, 40, 44, 22, 39};
//    int n = 20, count = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (data[i] > 25) count++;
//    }
//
//    cout << count << endl;
//    return 0;
//}
