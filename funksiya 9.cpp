#include <iostream>
using namespace std;
void cem(int a){
int s=0,k;
for(int I=1;a>=I;I++){
cin>>k;
s+=k;} 
cout << endl;
cout << "cəm " <<s <<endl; }


int main() {
int n;
cout << "necə ədəd daxil ediləcək " << endl;
cin >> n;
cout << "ədədləri daxil edin " << endl; 
cem(n);
    return 0;
}