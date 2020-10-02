#include <iostream>
using namespace std;

int main (){
  //for sensitive number, we use float (decimal)
  float a, b, c ;
  float average;
// calculate the average
  cout << " Calculator average " << endl ;
  cout << "--------------------" << endl;
//eter 3 score 
  cout << "Enter your score " <<endl; 
//inout first score
  cout << "Score 1 :";
  cin >> a;
//inout second score
  cout << "Score 2 :";
  cin >> b;
//inout third score
  cout << "Score 3 :";
  cin >> c;
//formula
  average = ( a + b + c ) / 3 ;
//if else fo find the grade
  if (average >= 80) {
    cout << "Your grade = A";
  }
  else if (average >= 75) {
    cout << "Your grade = AB";
  }
  else if (average >=70){
    cout << "Your grade = B";
  }
  else if (average >=65){
    cout << "Your grade = BC";
  }
  else if ( average >=60) {
    cout << "Your grade = C";
  }
  else if (average >=40){
    cout << "Your grade = D";
  }
  else if (average >=0){
    cout << "Your grade = E";
  }
  else {
    cout << "Your input is not valid";
  }
  return 0;
}