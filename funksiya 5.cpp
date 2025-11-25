#include <iostream>
using namespace std;

int funk(int k)  {
   int a = 1,b=0,c;  
   if (a>=1) cout <<a << " ";
    if(a>=2) cout <<b<< " ";
    for(int I =3;a>=I;I++){ 
    c=a+b;
    cout << c << " ";
    a=b;
    b=c;}
    }
int main(){ 
int n;
    cout << "ədəd daxil edin " << endl;
    cin >>n;
funk(n);
return 0;}