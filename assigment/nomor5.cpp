#include <iostream>
using namespace std;

int main (){
int formatjam1 = 1400, formatjam2 = 2100;

// ( > lebih dari, < kurang dari, != tidak sama dengan, == sama dengan, >= lebih dari atau sama dengan, <= kurang dari atau sama dengan, & dan, | atau, && (AND) mengembalikan nilai true jika kedua variabel benar dan kebali ke false jika kedua variabel salah.)

cout <<"Waktu pertama dalam format 24jam: " << formatjam1 <<endl;
cout <<"Waktu kedua dalam format 24jam " << formatjam2 <<endl;

int jam1,menit1,jam2,menit2;
//variabel memisahkan jam dan menit waktu yang pertama
jam1=formatjam1/100;
menit1=formatjam1%100;

cout <<"Waktu pertama dalam format 12jam: ";
//Kondisi
if(jam1==0 && jam1!=12){ //jika jam sama dengan 0 atau jam tidak sama dengan 12
  jam1=12; //jika jam sama dengan 12
  printf("%.2d:%.2d AM\n",jam1,menit1); //maka ini yang akan tampil
  //%.2d:%.2d menampilkan 2 variabel dengan : sebagai pemisah  
}
else if(jam1==12 && jam1!=0){ //jika jam sama dengan 12 atau jam tidak sama dengan 0
  jam1=12; //jika jam sama dengan 12
  printf("%.2d:%.2d PM\n",jam1,menit1);
}
else if(jam1<12 && jam1!=0){ // kalau yg ini kurang dari 12 tidak sama dengan 0
  jam1=jam1;
  menit1=menit1;
  printf("%.2d:%.2d AM\n",jam1,menit1);
}
else if(jam1>12 && jam1!=0){
  jam1=jam1-12;
  menit1=menit1;
  printf("%.2d:%.2d PM\n",jam1,menit1);
}

//variabel memisahkan jam dan menit untuk waktu yg kedua
jam2=formatjam2/100;
menit2=formatjam2%100;

cout <<"Waktu kedua dalam format 12jam: ";
//Kondisi
if(jam2==0 && jam2!=12){
  jam2=12;
  printf("%.2d:%.2d AM\n",jam2,menit2);
}
else if(jam2==12 && jam2!=0){
  jam2=12;
  printf("%.2d:%.2d PM\n",jam2,menit2);
}
else if(jam2<12 && jam2!=0){
  jam2=jam2;
  menit2=menit2;
  printf("%.2d:%.2d AM\n",jam2,menit2);
}
else if(jam2>12 && jam2!=0){
  jam2=jam2-12;
  menit2=menit2;
  printf("%.2d:%.2d PM\n",jam2,menit2);
}
return 0;
}