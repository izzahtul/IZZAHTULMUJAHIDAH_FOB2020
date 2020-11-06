#include <iostream>
#include <cmath>
using namespace std;

int main (){
  double x;
  double result3;
  for (x=1 ; x<5; x++){
    //pow untuk pangkat
    //y = 2x^2-x+7
  result3 = 2*(pow(x,2)) - x + 7;
  cout << "y=  " << result3 << endl;
  }
  return 0;
}