#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, A, B;
    cin >> a >> b;
    A = a*a;
    B = b*b;
    c = A+B;
    cout << fixed << setprecision(6) << sqrt(c) << endl;
    return 0;   
}
