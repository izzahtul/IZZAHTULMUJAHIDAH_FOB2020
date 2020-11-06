#include <iostream>
#include <cmath>
using namespace std;

int main (){

//ceil () untuk membulatkan keatas
//floor()untuk membulatkan kebawah
  double r = 5.89;
  double result4a1;
  double result4a2;
    result4a1 = ceil(r);
    result4a2 = floor(r);
    cout <<  "round up = " << result4a1 <<endl;
    cout << "round down = " << result4a2 << endl;

  double s = 7.2;
  double result4b1;
  double result4b2;
    result4b1 = ceil(s);
    result4b2 = floor(s);
    cout <<  "round up = " <<  result4b1 << endl;
    cout <<  "round down = " <<  result4b2 << endl;

  double t = 12.05;
  double result4c1;
  double result4c2;
    result4c1 = ceil(t);
    result4c2 = floor(t);
    cout <<  "round up = " <<result4c1 << endl;
    cout <<  "round down = " << result4c2 << endl;
    

  double u = 0.03;
  double result4d1;
  double result4d2;
    result4d1 = ceil(u);
    result4d2 = floor(u);
    cout <<  "rown up = "  << result4d1 << endl;
    cout <<  "rown down = "  << result4d2 << endl;

  return 0;
}