#include <iostream>
using namespace std;

int main(){
  int age;
  //give your age
 cout << "Enter your age : " ;
 cin >> age;
 //for child
if ( age >= 0 && age <12 )
{
    cout << " You are a child!" << endl;
}
//fot teenager
if ( age >=12 && age <=18 )
{
    cout << " You are a teenager!" << endl;
}
//for adult
if ( age >18)
{
    cout << "You are an adult!" << endl;   
}
  return 0;
}
