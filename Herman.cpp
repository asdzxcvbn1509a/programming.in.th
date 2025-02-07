#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int num;
    double r, result;
    cin >> num;
    r = (num*num)*3.141592653589793;
    result = (num*num)*2;
    cout << fixed <<setprecision(6)<< r << "\n" << result;
    return 0;
}
