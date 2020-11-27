#include <iostream>
using namespace std;
//array
int myList[5] = {4, 7, 12, 5, 2};
//function

void get () {
//jika genap

  for (int i = 0; i < 5; i++){
    if(myList[i]%2 == 0)
    cout<<"Even : " << myList[i] << endl;
  //jika ganjil 
    else 
    cout <<"Odd : " << myList[i] <<endl;
  }
}
//menjalankan code
int main (){

get ();

return 0;

}