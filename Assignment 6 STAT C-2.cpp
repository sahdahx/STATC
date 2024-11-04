#include<iostream>
using namespace std;

struct StudentRec {
	string student_id;
	float midterm_score;
	float finalexam_score;
};

StudentRec siswa[50];

int main() {
	int N;
	cout << "Masukkan Jumlah Mahasiswa: ";
	cin >> N;
	
	cout << "=== STUDENTS DATA ===" << endl;
	for(int i = 0; i<N; i++) {
		cout << "Masukkan ID Mahasiswa: ";
		cin >> siswa[i].student_id;
		cout << "Masukkan Nilai Ujian Tengah Semester: ";
		cin >> siswa[i].midterm_score;
		cout << "Masukkan Nilai Ujian Akhir: ";
		cin >> siswa[i].finalexam_score;
		cout << "\n";
	}
	cout << endl;
	getchar();
	
	cout << "=== SHOW THE STUDENTS DATA ===" << endl;
	for(int i=0; i<N; i++) {
		cout << "Hasil dari siswa ke-" << i+1 << endl;
		cout << "ID Mahasiswa: " << siswa[i].student_id << endl;
		cout << "Rata-rata: " << siswa[i].midterm_score/2 + siswa[i].finalexam_score/2 << endl;
	}
	cout << endl;
	getchar();
	return 0;
}
