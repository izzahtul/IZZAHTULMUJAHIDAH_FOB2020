#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  // v adalah volume dan s adalah surface
  float r;
  float v;
  float s;
  // tetapan phi
  float phi = 3.14;

   cout << " the radius of shpere :" << endl;
   cin >> r;

   v = (4/3*phi*r*r*r);
   cout << " Shpere's volume :" << v << endl;

   s = (4*phi*r*r);
   cout << "Shpere's surfece :" << s << endl;

   return 0;
}