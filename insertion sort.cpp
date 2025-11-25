#include <iostream>
using namespace std;
void sort(int a[],int n){
for(int i=1;n>i;i++){
int key=a[i];
int j=i-1;
while(j>=0&&key<a[j]){
a[j+1]=a[j];
j--;
}
a[j+1]=key;
}
}
int main() {
int a[5] = {5, 2, 4, 6, 1};
int n = 5;
sort(a, n);
for (int i=0;i<n;i++) {
cout << a[i] << " ";
}
}