#include <iostream>
using namespace std;
//fungsi untuk mendefinisikan cara menghitung jumlah  angka
int sumdigit (int x){
  int sumdigit;
  for (sumdigit = 0 ; x > 0 ; sumdigit += x % 10, x/=10);
  return sumdigit;
}
//mendeklasrasikan
int main (){
  int x = 125;
  cout << "Sum digits of integers 125 is "<< sumdigit(x) << endl;
  int x1 = 212;
  cout << "\nSum digits of integers 212 is "<< sumdigit(x1) << endl;
  int x2 = 46;
  cout << "\nSum digits of integers 46 is "<< sumdigit(x2) << endl;
   int x3 = 93;
  cout << "\nSum digits of integers 93 is "<< sumdigit(x3) << endl;

}