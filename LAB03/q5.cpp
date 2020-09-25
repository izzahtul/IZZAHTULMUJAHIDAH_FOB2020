#include <iostream>
#include <cstdlib>
using namespace std;

int main (){

  srand (time(NULL));
  float num = rand () % 100, jawaban;
  
cout << "Hi, selamat datang di Lab03 Game\n"<< "Bagaimana cara memainkannya?\n" << "Sebut 1 angka kisaran 1-100!\n"<< "Angka berapa yang kamu masukkan ?" << endl;
cin >> jawaban;

if (jawaban > 0 && jawaban <= 100){
if (num == jawaban){
  cout << "Kamu benar, good job" << endl;
  } else if (num < jawaban) {
    cout << "Angka yang kamu masukkan terlalu besar, angkaku adalah = " << num << endl;
  }
} else {
  cout << " Angkanya 1-100!" << endl;
}

  return 0; 
}