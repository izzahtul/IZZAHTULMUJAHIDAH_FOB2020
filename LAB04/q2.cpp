#include <iostream>
using namespace std;
int main (){
    
int month, year;
// enter a month and year for know what user want to know
cout << " Enter month = " << endl;
cin >> month;

cout << " Enter year = " << endl;
cin >> year;

switch (month) {
  
    // if input January
    case '1' : 
        cout << " It has 31 days ";
    break;
    // if input February
    case '2' :
     if ((year%400==0) || (year%4==0 && year%100!=0)) {
        cout << "It has 29 days" ;
    }
     else {
        cout << "It has 28 days";
    }
    break;
    // if input March
    case '3' :
        cout << "It has 31 days ";
    break;
    // if input April
    case '4' :
        cout << "It has 30 days" ;
    break;
    // if input May
    case '5' :
        cout << "It has 31 days" ;
    break;
    // if input June
    case '6' :
        cout << "It has 30 days" ;
    break;
    // if input July
    case '7' :
        cout << "It has 31 days" ;
    break;
    // if input August
    case '8' :
        cout << "It has 31 days" ;
    break;
    // if input September
    case '9' :
        cout << "It has 30 days" ;
    break;
    // if input October
    case '10' :
        cout << "It has 31 days" ;
    break;
    // if input November
    case '11' :
        cout << "It has 30 day" ;
    break;
    // if input December
    case '12' :
        cout << "It has 31 days" ;
    break;
}
return 0;

}