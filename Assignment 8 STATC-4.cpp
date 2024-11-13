#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string &word, int start, int end) {
    if (start >= end)
        return true;
    if (word[start] != word[end])
        return false;
    return is_palindrome(word, start + 1, end - 1);}

int main() {
    // Program mengecek palindrom
    string word;
    cout << "Masukkan kata: ";
    cin >> word;
    if (is_palindrome(word, 0, word.length() - 1))
        cout << "Kata tersebut adalah palindrom." << endl;
    else
        cout << "Kata tersebut bukan palindrom." << endl;

    return 0;
}

