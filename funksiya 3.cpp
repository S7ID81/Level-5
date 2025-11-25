#include <iostream>
using namespace std;

int funk() {
   int a=1 ;
   int s = 0;
    while(a!=0) {
    cout << "ədəd daxil edin " << endl;
      cin >>a;  s +=a;
    }
    return s;
}
int main(){ 
int n;
int k= funk();
cout << "cem " << k<<endl;
return 0;}