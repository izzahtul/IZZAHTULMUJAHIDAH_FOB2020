 #include <iostream>
using namespace std;

int main ()
{

int number ,remainder;
// angka yang akan dimasukkan ( sembarang angka)
cout << " Enter the number = ";
cin >> number;
remainder = number % 2;
// jika angkanya genap
if (remainder == 0)
cout << "Is an even integer" << endl;
// jika angkanya ganjil
else
cout << number << " Is an odd integer" << endl;

return 0;

}