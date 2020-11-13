#include <iostream>
#include <cmath>
using namespace std;

//fungsi untuk mencari area circle
float area (float rad){
  float area;
  //menyatakan pi
  double pi;
  pi = M_PI; 
  //formula dari area lingkaran
  area = pi * (pow(rad,2));
  return area;
}

int main(){
  float rad;
  //menanyakan kepada user
  cout << "Radius = " << endl;
  cin >> rad;
  cout << "Area of circle = " << area(rad)<< endl;

  return 0;
}