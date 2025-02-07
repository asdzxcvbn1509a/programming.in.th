#include <iostream>
using namespace std;

int main() {
    int quantity;
    cin >> quantity;
    
    if (quantity >=1 && quantity <= 1000) {
        int data[quantity];
        for (int n=0; n<quantity; n++) {
            cin >> data[n];
        }
        int max = data[0];
        int min = data[0];
        for (int n=1; n<quantity; n++) {
            if (data[n] > max) {
                max = data[n];
            }
            if (data[n] < min) {
                min = data[n];
            }
        }
        cout << min << endl;
        cout << max << endl;
    }
    else {
        cout << "wrong" << endl;
    }
    return 0;
}
