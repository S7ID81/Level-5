#include <iostream>
using namespace std;

void bolen(int a) {
    for (int I=1;I<=a;I++) {
   if (a % I == 0) cout << I<< " ";
    }
}

int main() {
int n;
cout << "ədəd daxil edin " << endl;
cin >> n; bolen(n);
    return 0;
}