#include <iostream>
using namespace std;

int funk(int a)  {
   int s = 0;
    while(a>0) {
        s=s*10+(a%10);
        a/=10;
    }
    return s;
}
int main(){ 
int n;
    cout << "ədəd daxil edin " << endl;
    cin >>n;
int k= funk(n);
cout << "ədədin tersi " << k<<endl;
return 0;}