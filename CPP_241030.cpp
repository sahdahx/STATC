#include<iostream>
#include<cmath>
using namespace std;

// FUNCTION 1
float distance(int x1, int y1, int x2, int y2) {
	float result = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2)); // pow = pangkat
	return result;
}

// FUNCTION 2
void greetings(string nama) {
	cout << "selamat pagi " << nama << endl;
}

// FUNCTION 3
int kuadrat(int x) {
	x = x*x;
	return x;
}

int main() {
	int x1 = 3, y1 = 5, x2 = 6, y2 = 2;
	cout << distance(x1, y1, x2, y2) << endl; 

//	x3 = 0;
//	y3 = 0;
//	x4 = 3;
//	y4 = 4;
//	distance = sqrt((x4-x3)*(x4-x3) + (y4-y3)*(y4-y3));
//	cout << distance << endl; 

	string name1 = "Ahmad", name2 = "Budi", name3 = "Caca";
	
	greetings(name1);
	greetings(name2);
	greetings(name3);
	
	int x;
	cout << "input nilai: " ;
	cin >> x;
	cout << "hasil kuadrat: " << kuadrat(x) << endl;
}


