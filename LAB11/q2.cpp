#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main (){
  //membaca file
  ifstream input;
  input.open("lab11_employee.txt");

  if(input.fail()){
    cout <<" ERROR; File could not open."<<endl;
    exit(1);
  }
//input array dengan ukkuran
  const int arr_size = 8;

  string name[arr_size];
  double salary[arr_size];

  int i=0;
  double averagesalary=0;
  string line;

//membaca dan memisahkan 2 kata pada file
  while(getline(input, line)) {
    int start = line.find('$')-1;
    name[i] = line.substr(0, start);
    int salarystart = line.find('$')+1;
    int salaryend = line.find('\n');
    salary[i] = stod(line.substr(salarystart,salaryend));
    ++i;
  }
//loop
  for(int i=0; i< arr_size; i++) {
    cout << name[i] <<" = "<<salary[i] <<endl;
  }
  cout <<endl;
cout <<"--------------------------------------------------"<< endl;
//untuk mencari gaji terendah
string min_sal = name[0];
double min = salary[0];
for(int i=0; i< 8 ; i++) {
  if(salary[i]<min){
    min=salary[i];
    min_sal=name[i];
  }
}

//untuk mencari gaji tertinggi
 string max_sal = name[0];
 double max = salary[0];
 for(int i=0; i< 8 ; i++) {
  if(salary[i]>max){
    max=salary[i];
    max_sal=name[i];
  }
 }

//Rata-rata gaji karyawan
int sum = 0;
for(int i=0; i< 8; i++){
  //total gaji seluruhnya
  sum+=salary[i];
}
//rata-rata gaji dari 8 karyawan
averagesalary = sum/8;

//Gaji karyawan diatas rata-rata
for(int i=0; i< 8 ; i++){
  if(salary[i]>averagesalary){
    cout <<"Gaji diatas rata-rata adalah :  " << name[i]<<endl;
  }
}
cout <<endl;
cout <<"--------------------------------------------------"<< endl;
//Gaji karyawan dibawah rata-rata
for(int i=0; i< 8 ; i++){
  if(salary[i]<averagesalary){
    cout <<"Gaji dibawah rata rata adalah : " << name[i]<<endl;
  }
}
cout <<endl;
cout << "---------------------------------------------------"<< endl;
cout << "Tertinggi : " << max_sal <<" " << max <<endl;
cout << "Terendah : " << min_sal <<" " << min <<endl;

cout << "-----------------------------------------------------"<< endl;

  input.close();
  return 0;
}
