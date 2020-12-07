#include <iostream>
#include <fstream>
using namespace std;

int main (){
//deklarasi elemen
int myarray[100];
int maks;
int min;
int jumlah;
int rata_rata;
//untuk membaca file 100 bilangan
ifstream file ("lab11_randnum.txt");
  if (file.is_open ())
  for ( int i = 0; i < 100 ; ++i){
      file >> myarray[i];
    }
 //mencari nilai maksimum 
maks = myarray [0];
for (int i = 0; i < 100 ; i++){
  if (myarray [i]> maks){
    maks = myarray[i];
  }
}
//mencari nilai minimum
min = myarray [0];
for (int i = 0; i < 100 ; i++){
  if (myarray[i] < min){
    min =  myarray [i];
  }
}
//mencari rata_rata
for (int i = 0; i < 100 ; i++){
  jumlah+= myarray[i];
  rata_rata = jumlah/100;
}
//print
cout << "Nilai terbesar : " << maks << endl;
cout << "---------------------------"<< endl;
cout << "Nilai terkecil : " << min << endl;
cout << "---------------------------"<< endl;
cout << "Nilai rata-rata : " << rata_rata << endl;
return 0;
}