#include <iostream>
using namespace std;
int main() {
    int x, a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    x= a % b;
    while (x!=0)
    {
        a=b;
        b=x;
        x=a%b;
    }
    cout << "\nthe greatest number: " << b;
    return 0;
}
