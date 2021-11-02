#include <iostream>
using namespace std;
int main() {
    int m , n;
    cout << "enter width: ";
    cin >> m;
    cout << "enter height: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        if((i%2)==0) {
            for (int j = 0; j < m; j += 2) {
                cout << "*";
                if (j != m - 1)
                    for (int k = 0; k < 2; k += 2)
                        cout << "#";
            }
        }
        else
            for (int j = 0; j < m; j+=2) {
                cout << "#";
                if (j != m-1)
                    for (int k = 0; k < 2; k+=2)
                        cout << "*";
            }
        cout << endl;
    }
    return 0;
}
