#include <iostream>
#include <cmath>
using namespace std;

int main() {
cout << "Exercises LAB FOB 8" << endl;
cout << "---------------------------"<< endl;
cout << "Mathematical Function" << endl;
cout << "---------------------------"<< endl;
cout << "Nomor 1a" << endl;
//1a mencari sin 37
  double pi;
  double x = 37;
//menyatakan nilai pi
  pi = M_PI; 
  double result1a;
//rumus untuk mencari cos
  result1a = cos (x*pi/180);
  cout << result1a <<endl;
  cout << "Nomor 1b" << endl;
  //1b mencari nilai cos 53
  double y = 53;
  double result2;
  // rumus untuk mendapatkan nilai cos
  result2 = cos (y*pi/180);
  cout << result2<< endl;

  cout << "Nomor 1c" << endl;
  //1c mencari nilai tan 60
  double z = 60; 
  double result3;
  //rumus untuk mendapatkan nilai tan
  result3 = tan (z*pi/180);
  cout << result3<< endl;

return 0;
}