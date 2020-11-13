#include <iostream>
#include <cmath>
using namespace std;

//fungsi untuk mencari volume circle
float volume (float rad){
  float volume;
  //menyatakan pi
  double pi;
  pi = M_PI; 
  //formula dari volume lingkaran
  volume = (4/3)* pi * (pow(rad,3));
  return volume;
}

int main(){
  float rad;
  //menanyakan kepada user
  cout << "Radius = " << endl;
  cin >> rad;
  cout << "Volume of circle = " << volume(rad)<< endl;

  return 0;
}