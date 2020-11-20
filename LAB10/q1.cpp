#include <iostream>
using namespace std;
//fungsi untuk mencari nilai maksimum dari 2 bilangan
int maks (int h, int i){
  if ( h > i ){
    return h;
  }
  else {
    return i;
  }
}
//fungsi untuk mencari nilai minimum dari 2 bilangan
int min (int h, int i){
  if ( h < i ){
    return h;
  }
  else {
    return i;
  }
}
//fungsi untuk mencari nilai minimum dari 2 bilangan (double)
double min (double h, double i){
  if (h < i) {
    return h;
  }
  else {
    return i;
  }
}
//nilai minimum dari 3 bilangan (double)
double min (double h, double i, double j){
  if (h < i < j) {
    return h;
  }
  if ( i < h < j) {
    return i;
  }
  else{
    return j;
  }
}
//mengerjakan fungsi
int main (){
  cout << "Maksimum number : " << maks (7,4) << endl;
  cout << "\nMinimum number : " << min (7,4) << endl;
  cout << "\nMinimum number : " << min (1.2,3.1) << endl;
  cout << "\nMinimum number from 3 integers :" << min(1.7,1.4,1.9) << endl;
  return 0;
}