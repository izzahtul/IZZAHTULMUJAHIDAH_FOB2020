#include <iostream>
#include <cmath>
using namespace std;
//membuta fungsi untuk penjumlahan
int sumnum (int num1,int num2){
  int result1 = num1 + num2;
  return result1;
}
//fungsi untuk pengurangan
int subnum (int num1,int num2){
  int result2 = num1 - num2;
  return result2;
}
//fungsi untuk perkalian
int mulnum (int num1,int num2){
  int result3 = num1 * num2;
  return result3;
}
//fungsi untuk pembagian
int dinum (int num1,int num2){
  int result4 = num1 / num2;
  return result4;
}
//output yang akan keluar, dengan nuber yang telah diinput
int main (){
  cout << sumnum (7,7) <<endl;
  cout << subnum (9,3) << endl;
  cout << mulnum (4,7) << endl;
  cout << dinum ( 3,7) << endl;

  return 0;
}


