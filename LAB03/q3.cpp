#include <iostream>;
using namespace std;

int main (){
  char c;
  int hurufkecil, hurufkapital;
//masukkan huruf
  cout << "Enter an alfabhet";
  cin>>c;
//jika huruf tersebut adalah huruf kecil
  hurufkecil = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  //jika huruf tersebut adalah huruf kapital
  hurufkapital = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

//menentukan apakah vowel atau consonant
    if (hurufkecil || hurufkapital)
    //vowel
        cout << c << " is a vowel.";
    //consonant
    else
        cout << c << " is a consonant.";

    return 0;

}