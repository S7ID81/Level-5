#include <iostream>
using namespace std;

int funk(int a) {
    int s = 0;
    for (int I=0;I<a;I++) {
        s +=I;
    }
    return s;
}
int main(){ 
int n;
cout << "ədəd daxil edin " << endl;
cin >> n;
int k= funk(n);
cout << "cem " << k<<endl;
return 0;}