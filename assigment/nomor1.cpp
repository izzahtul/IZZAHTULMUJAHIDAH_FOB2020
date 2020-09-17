#include <iostream>
using namespace std;

int main(){

int a = 12;
int b = 5;
int hasil ;

// operasinya +, -, *, /, %

hasil = a + b;
cout << a << "+" << b <<"="<< hasil << endl;

// pengurangan
hasil = a - b;
cout << a << "-" << b << "=" << hasil << endl;

// perkalian
hasil = a * b;
cout << a << " * " << b << "=" << hasil << endl;

// pembagian
hasil = a / b ;
cout << a << " / " << b << "=" << hasil << endl;

// modulus
hasil = a % b ;
cout << a << " % " << b << " = " << hasil << endl;

return 0;

}