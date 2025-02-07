#include <iostream>
#include <string>
using namespace std;

int main() {
    bool left=true, mid=false, right=false;
    string abc;
    cin >> abc;
    for (int i=0; i<abc.length(); i++) {
        if (abc[i] == 'A') {
            swap (left,mid);
        }
        if (abc[i] == 'B') {
            swap (mid,right);
        }
        if (abc[i] == 'C') {
            swap (left,right);
        }
    }
    if (left) {
        cout << '1';
    }
    else if (mid) {
        cout << '2';
    }
    else {
        cout << '3';
    }
    return 0;
}
