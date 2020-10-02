#include <iostream>
using namespace std;

int main (){
  
  float weight, height ;
  float calculateBMI;

  cout << " Calculate the BMI" << endl ;
  cout << "--------------------" << endl;
//input weigt and height
  cout << "Enter yours " <<endl; 

  cout << "Input Weight (kg) :";
  cin >> weight;

  cout << "Input Height (m) :";
  cin >> height;
// formula to find the BMI
  calculateBMI = weight/ (height*height);
// if-else for know the class (BMI)
  if (calculateBMI < 18.5){
    cout << "Underwight";
  }
 else if (calculateBMI >= 18.5 && calculateBMI <= 24.9){
     cout << "Underweight";
  }
  else if (calculateBMI >= 25 && calculateBMI <= 29.9){
    cout << "Overweight";
  }
  else if (calculateBMI >= 30 ){
    cout << "Obesity";
 }
  else {
    cout << "Your input is not valid";
  }
  return 0;
}