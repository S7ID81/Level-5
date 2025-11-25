#include <iostream>
using namespace std;
bool sade(int a){
if(a<2) return false;
for(int I=2;a>I;I++){
if(a%I==0) return false;
}
return true;
}

int main() {
    int n;
    cout << "ədəd daxil edin  ";
    cin >> n;

   if(sade(n)) cout << "sadedir" << endl;
   else
   cout << "sadə deyil" << endl;

    return 0;
}