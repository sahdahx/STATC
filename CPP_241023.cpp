#include<iostream>
using namespace std;

struct fullname {
	string firstname;
	string lastname;
};

struct StudentRec {
	fullname name;
	string idNum;
	float gpa;
};

StudentRec theStudent[10];

int main() {
	int n;
	cout << "masukkan nomor student: ";
	cin >> n;
	
	cout << "=== STUDENTS DATA ===" << endl;
	for(int i = 0; i<n; i++) {
		cout << "insert the data of student " << i+1 << endl;
		cout << "First Name: ";
		cin >> theStudent[i].name.firstname;
		cout << "Last Name: ";
		cin >> theStudent[i].name.lastname;
		cout << "Student ID: ";
		cin >> theStudent[i].idNum;
		cout << "GPA: ";
		cin >> theStudent[i].gpa;
	}
	cout << endl;
	getchar();
	
	cout << "=== SHOW THE STUDENTS DATA ===" << endl;
	for(int i=0; i<n; i++) {
		cout << "Show the data of student" << i+1 << endl;
		cout << "First Name: " << theStudent[i].name.firstname << endl;
		cout << "Last Name: " << theStudent[i].name.lastname << endl;
		cout << "Student ID: " << theStudent[i].idNum << endl;
		cout << "GPA: " << theStudent[i].gpa << endl;
	}
	cout << endl;
	getchar();
	return 0;
}


