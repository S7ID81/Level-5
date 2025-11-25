#include <iostream>
using namespace std;
bool polindrom (int a){
int c=0;
int t=a;
while (t>0) {
c=c*10+(t%10);
t/=10;}
if(c==a) {
return true;}
else 
return false;
}

int main() {
int n;
cout << "ədəd daxil edin "<<endl;
cin >> n;
if(polindrom(n)) 
cout << "polindromdur" << endl;
else
cout << "polindrom deyil" << endl;

    return 0;
}