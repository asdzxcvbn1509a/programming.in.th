#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[m][n], b[m][n];
    if (m>=1 && m<=100 && n>=1 && n<= 100) {
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                cin >> a[i][j];
            }
        }
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                cin >> b[i][j];
            }
        }
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                cout << a[i][j] + b[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Wrong" << endl;
    }
    return 0;
}
