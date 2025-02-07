#include <iostream>
#include <string>
using namespace std;

int main() {
    int num[3];
    int max=0, mid=0, min=100;
    string abc;
    for (int i=0; i<3; i++) {
        cin >> num[i];
    }
    for (int i=0; i<3; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
    }
    for (int i=0; i<3; i++) {
        if (num[i] < max && num[i] > min) {
            mid = num[i];
        }
    }
    cin >> abc;
    for (int i=0; i<3; i++) {
        if (abc[i] == 'C') {
            cout << max << " ";
        }
        else if (abc[i] == 'B') {
            cout << mid << " ";
        }
        else {
            cout << min << " ";
        }
    }
    return 0;
}
