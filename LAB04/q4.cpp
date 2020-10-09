#include <iostream>
using namespace std;

int main (){
  
  float weight, height ;
  float calculateBMI;

  cout << " Calculate the BMI" << endl ;
  cout << "--------------------" << endl;

  cout << "Enter yours " <<endl; 

  cout << "Input Weight (kg) :";
  cin >> weight;

  cout << "Input Height (m) :";
  cin >> height;

  calculateBMI = weight/ (height*height);

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