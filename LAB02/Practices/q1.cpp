#include <iostream>
using namespace std;

int main ()
{
  // variabel 
  int l, w, area, perimeter ;

 // nilai lenght dan width
 cout << "your rectangle's lenght :" << endl;
 cin >> l ;
 cout << "your rectangle's width :" << endl ;
 cin >> w ;
// hasil perhitungan luas dan keliling
 area = l*w;
 perimeter = 2* (l+ w);

 cout << " your rectangle's  area : " << area << endl ;
 cin >> area ;
 cout << " your rectangle's perimeter : " << perimeter << endl;
 cin >> perimeter ;

return 0 ;


}