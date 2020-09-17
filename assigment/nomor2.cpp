#include <iostream>
using namespace std;

int main(){
int r,d;
float phi=3.14, luas, keliling;

//  diameter lingkaran adalah 10
//  r adalah setengah diameter
 cout <<"jari jari lingkaran"<< endl;
 cin >> r ;
 luas = phi * r * r;
 cout << "luas lingkaran adalah" << luas << endl;

 cout << "diameter lingkaran";
 cin >> d;
 keliling = phi*d;
 cout << "keliling lingkaran adalah" << keliling << endl;

 return 0;

}