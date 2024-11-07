#include <iostream>
using namespace std;

string potong(string kata, int n) {
	string result = "";
	int pjg = kata.length();
	for(int i = pjg-(n+1); i < pjg; i++ ) {
		result += kata[i];
	}
	return result;
}

int main() {
	string kata;
	int n;
	cin >> kata;
	cin >> n;
	
	cout << potong(kata, n) << endl;
}
