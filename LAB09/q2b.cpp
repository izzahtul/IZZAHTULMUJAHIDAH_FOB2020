#include <iostream>
using namespace std;
//fungsi untuk mengecek bilangan ganjil atau genap
string check (int x){
//code jika bilangan genap
  if (x % 2 == 0){
    return "Genap";
  }
//code jika bilangan ganjil
  else {
    return "Ganjil";
  }
}
//declare
int main (){
  int x;
//menanyakan kepada user untuk angka yang akan dicek
  cout << "Angka yang akan dicek adalah :" << endl;
  cin >> x;
//output
  cout << "Angkamu adalah : " << check (x) << endl ;
  return 0;
}