#include <iostream>
using namespace std;

int main (){

int hour;
// masukkan waktu sekarang
cout << "What time is it now ?" ;
cin >>hour;
// ucapan 
if ( hour >= 5 && hour <= 12){
  cout << "Good Morning!";
}
if (hour >= 13 && hour <= 17){
  cout << "Good Afternoon!";
}
if (hour >= 18 && hour <= 24){
  cout << "Good Evening !";
}
else if ( hour > 24){
  cout << "error!";
}

return 0;
}