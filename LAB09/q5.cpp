#include <iostream>
using namespace std;

//fungsi multiple times
void multimes (string dasar, int jumlah){
//code
  for (int i = 0; i < jumlah ; i ++ ){
    cout << dasar << endl;
  }
}

int main (){
  //declare string
  string input;
  int inputx;
//menanyakan kepada user 
  cout << "String yang akan diduplikat :" << endl;
  cin >> input;;
  cout << "Banyaknya duplikat : " << endl;
  cin >>inputx;
  //mengerjakan input
  multimes (input, inputx);
  return 0;
  }