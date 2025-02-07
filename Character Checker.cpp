#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string character;
    cin >> character;
    bool upper = true, lower = true, mix = true;
    for (char ch : character) {
        if (!isupper(ch)) {
            upper = false;
        }
        else if (!islower(ch)) {
            lower = false;
        }
        else {
            mix = false;
        }
    }
    if (upper) {
        cout << "All Capital Letter";
    }
    else if (lower) {
        cout << "All Small Letter";
    }
    else {
        cout << "Mix";
    }
    return 0;
}
