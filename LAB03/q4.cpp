#include <iostream>
using namespace std;

int main(){
  char op;
  float ang1, ang2;
// memasukkan operasi apa yang ingin dilakukan
  cout << " Masukkan operasi antara + atau - atau * atau / ";
  cin >> op;
//angka yang ingin dioeprasikn
  cout << "Masukkan dua angka : ";
  cin >> ang1 >> ang2;
// operasi-operasi yang akan dilakukan
//selain operasi pada case +,-,*,/ maka akan error
switch (op)
{
  case '+' :
  cout << ang1 + ang2;
  break;

  case '-':
  cout << ang1 - ang2;
  break;

  case '*' :
  cout << ang1 * ang2;
  break;

  case '/' :
  cout << ang1 / ang2;
  break;

}

  return 0;
}