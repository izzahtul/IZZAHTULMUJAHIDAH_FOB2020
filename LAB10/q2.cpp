#include <iostream>
using namespace std;
// fungsi untuk menyatakan konversi suhu dari celcius ke fahrenheit
double fahT (double celT ){
  double fahT = (celT * 9/5) +32;
  return fahT;
}
// fungsi untuk menyatakan konversi suhu dari fahrenheit ke celcius

double celT (double fahT ){
  double celT = (fahT - 32) * 5/9 ; 
  return celT;
}
//output

int main (){
  cout << "Konversi suhu celcius ke fahrenheit:" << fahT(75) << endl;
  cout << "Konversi suhu fahrenheit ke celcius:" << celT(75) << endl;

}