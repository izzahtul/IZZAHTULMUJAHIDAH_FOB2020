#include <iostream>
using namespace std;
//fungsi yang digunakan untuk greet
void greet (string name){
//output
  cout << "Hallo!" << name  << " It's a pleasure to meet you :))" << endl;
}

int main (){
  string name;
//menanyakan nama user
  cout << "What's your name? " << endl;
  cin >> name;
//kembali ke output sapaan di fungsi
  greet (name);
  return 0;
}