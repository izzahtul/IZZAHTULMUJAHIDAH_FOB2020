#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
  srand(time(NULL));
// for random number from 1 to 100
  int randomNumber = rand() % 100 + 1;  
  int guesstheNumber; 
char status;
//games and rules
do {
  cout  << "Welcome to Guessing Number Games!" << endl;
  cout << "I will choose a random number beetween 1 to 100 " << endl ;
  cout  << " You should guess my number" << endl;
  cout << "Now, What is my number? ";
  
// Input number  
  cin   >> guesstheNumber;
 // Check the number
  if (guesstheNumber < 1 || guesstheNumber > 100){
    cout << "I said a random number beetween 1 to 100 firend"<< endl;
  } else if (guesstheNumber > randomNumber){
    cout << "oh nooo, your number is to high"<< endl;
    cout << "My number is " << randomNumber << endl;
  } else if (guesstheNumber < randomNumber){
    cout << "Waittt your number is to low friend"<< endl;
    cout << "My number is " << randomNumber << endl;
  } else if (guesstheNumber == randomNumber){
    cout << "Excellent friend, your number is correct"<< endl;
  }
  do {
    cout << "My number is " << randomNumber << endl;
    cout << " Continue [ Y/N ] ? " << endl;
    cin >> status ;
  }
   while  (status=='Y'||status=='y');
    cout<<"Bye friends, thank you "<<endl;
    
    return 0;
}
 