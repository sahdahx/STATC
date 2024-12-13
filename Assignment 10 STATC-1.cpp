#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int ID;
    string FullName;
    int Score;
};

bool compareByID(Student a, Student b) {
    return a.ID < b.ID;
}

int main() {
    Student students[] = {
        {408599, "Cecilio Schubart", 93}, {403189, "Desiri Chalker", 90}, {405462, "Falkner Carder", 75},
        {406703, "Delainey Ruckhard", 89}, {400324, "Colette Abramovic", 92}, {404342, "Irwinn Bussey", 81},
        {409504, "Terrie Whitaker", 83}, {401339, "Gary Binestead", 77}, {405509, "Ferris Fulbrook", 91},
        {400522, "Diane Bissill", 77}, {404878, "Ricoriki Jiroutka", 93}, {403536, "Reidar Putten", 89}
    };

    int n = sizeof(students) / sizeof(students[0]);
    sort(students, students + n, compareByID);

    int targetID;
    cin >> targetID;

    int left = 0, right = n - 1, found = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (students[mid].ID == targetID) {
            found = mid;
            break;
        } else if (students[mid].ID < targetID) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1) {
        cout << students[found].ID << " " << students[found].FullName << " " << students[found].Score << endl;
    } else {
        cout << "Data not found" << endl;
    }

    return 0;
}

