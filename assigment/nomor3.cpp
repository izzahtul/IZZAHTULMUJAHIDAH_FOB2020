#include <iostream>
using namespace std;

int main()
{
  int a = 7, b= 4, temp ;
// sebelum pertukaran nilai a dan b
  cout << "sebelum pertukaran" << endl;
  cout << "a" << a << "b" << b << endl;
// pertukaran nilai a dan b
  temp = a;
  a = b;
  b = temp;
// setelah pertukaran nilai a dan b
  cout << "n\after swapping." << endl;
  cout << "a= " << a << ",b= " << b << endl;

  return 0;


}