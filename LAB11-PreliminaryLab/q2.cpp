#include <iostream>
using namespace std;

//fungsi untuk deklarasi array
  int myList[5] { 4,  7, 12, 5, 2};
  
int q2(){
  int sum = 0;

    for (int n = 0; n < 5 ; n++){
        sum += myList[n];
    }
return sum;
}
   float average (){ 
    float average = q2()/5;
    return average;
}
  
 int main (){
 
    //output
   cout << "Sum of myList is : " << q2() << endl;
   cout << "Average of myList is : " << average() << endl;

    return 0;
}
 