#include <iostream>
using namespace std;

string potong(string kata, int n) {
	string result = "";
	int pjg = kata.length();
	for(int i = pjg-n; i < pjg; i++ ) {
		result += kata[i];
	}
	return result;
}

int main() {
	string kata;
	int n;
	cout << "masukkan kata: "; cin >> kata;
	cout << "masukkan bilangan: "; cin >> n;
	cout << "hasil: " << potong(kata, n) << endl;
}

