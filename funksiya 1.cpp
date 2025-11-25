#include <iostream>
using namespace std;

int funk(int a) {
    int s = 0;
    while (a > 0) {
        s += a % 10;
        a /= 10;
    }
    return s;
}
int main() {
    int n;
    cout << "Ededi daxiledin: ";
    cin >> n;
    int cavab = funk(n);
    cout << "cem: " << cavab;
    return 0;
}