#include <iostream>
#include <iomanip>
using namespace std;

int main ( )
{
//membuat tabel daftar nilai menggunakan setw
//untuk nama tabel
 cout << "SE 2021 Mid Exam\n\n" << left <<setw(10) << "Name" <<setw(10) << "FOP" << setw(10) << "Algebra" << setw(10) <<"Calculus" <<setw(10) << "Discrete" << "\n";
 // nilai yang didapatkan oleh John
 cout << left << setw(10) << "John" << setw(10) << "90" << setw(10) << "90" << setw(10) << "70" << setw(10) << "80" << "\n";

 //nilai yang didapatkan oleh Flora
 cout << left << setw(10) << "Flora" << setw(10) << "87" << setw(10) << "93" << setw(10) << "92" << setw(10) << "70" << "\n";

 //nilai yang didapatkan oleh Martha
 cout << left << setw(10) << "Martha" << setw(10) << "72" << setw(10) << "100" << setw(10) << "78" << setw(10) << "90" << "\n";
 
 return 0;
}