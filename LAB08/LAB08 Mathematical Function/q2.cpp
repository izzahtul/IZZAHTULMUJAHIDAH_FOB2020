#include <iostream>
#include <cmath>
using namespace std;

int main (){
 
 cout << "Nomor 2"<< endl;
  double a = 0.58;
  double result4;
  //hasil untuk radian
  result2a= asin(a);
  //menyatakan nilai pi
  pi = M_PI;
  cout << "asin(a) = " << result2a << " radian" << endl;
  //untuk hasil degree
  cout << "asin (a) = " <<
  result2a*180/pi << "degree" << endl;
  
  double b = 0.29;
  double result2b;
  //hasil untuk acos dalam bentuk radian
  result2b= acos(b);
  //menyatakan nilai pi
  pi = M_PI;
  cout << "acos(b) = " << result2b << " radian" << endl;
  //hasil untuk degree
  cout << "asin (b) = " <<
  result2b*180/pi << "degree" << endl;
  
  double c = 0.72;
  double result2c;
  //hasil atan alam bentuk radian
  result2c= atan(c);
  //menyatakan pi
  pi = M_PI;
  cout << "atan(c) = " << result2c << " radian" << endl;
  //hasil atan dalam bentuk degree
  cout << "atan (c) = " <<
  result2c*180/pi << "degree" << endl;
  
  double p = 156-12;
  double result2d;
  //sqrt function cmath untuk mencari hasil pengakaran
  result2d = sqrt (p);
  cout << "Square root of " << p <<"is "<< result2d<<endl;

return 0;
}