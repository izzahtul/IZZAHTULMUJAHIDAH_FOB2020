#include <iostream>
using namespace std;
//fungsi yang digunakan untuk swap value
//code
void swap (int*a, int *b){
  int temp;
  temp = *a;
  *a=*b;
  *b=temp;

}
int main (){
// value yang akan diswap
  int a = 5;
  int b = 7;

  cout << "--------------------------"<< endl;
  cout << "BEFORE"<< endl;
  cout << "a = " << a <<endl;
  cout << "b = " << b << endl;
//proses swap 
  swap (&a ,&b);
  cout << "--------------------------"<< endl;
  cout <<"AFTER"<< endl;
  cout << "a = " << b << endl;
  cout << "b = " << a << endl;

  return 0;
}