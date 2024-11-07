#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int numA[10] = {1,2,3,4,5,6,7,8,9,10};
int numB[10] = {1,2,3,4,5,6,7,8,9,10};
int numC[5];

for (int i = 0; i<5 ; i++){
       numC[i] = numA[i] + numB[i+5];
}

cout << numC[4];
}
