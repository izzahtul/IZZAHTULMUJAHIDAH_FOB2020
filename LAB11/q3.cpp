#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main (){
  //membaca file lab11_grade.txt
  ifstream input;
  input.open("lab11_grade.txt");

  if(input.fail()){
    cout <<" ERROR; File could not open."<<endl;
    exit(1);
  }

  const int arr_size = 40;

  string name[40];
  double grade[40];

  int i=0;
  string line;

  while(getline(input, line)) {
    int name_end = line.find('-')-1;
    name[i]=line.substr(0, name_end);
    int grade_start = line.find('-')+1;
    int grade_end = line.find('\n');
    grade[i]=stod(line.substr(grade_start, grade_end));
    ++i;
  }


  for(int i=0; i< 40; i++) {
  }

//Yang tertinggi
 string max_name = name[0];
 double max = grade[0];
 for(int i=0; i< 40; i++) {
  if(grade[i]>max){
    max=grade[i];
    max_name=name[i];
  }
 }

  //Yang terendah
  string min_name = name[0];
  double min = grade[0];
  for(int i=0; i< 40 ; i++) {
   if(grade[i]<min){
      min=grade[i];
      min_name=name[i];
    }
  }
 cout << "Nilai tertinggi : " << max_name <<" " << max <<endl;
 cout << "Nilai terendah :" << min_name <<" " <<min <<endl;
cout << "---------------------------------------------------"<< endl;

//Rata-rata
int jumlah = 0;
double rata_rata;
for(int i=0; i< 40 ; i++){
  jumlah+=grade[i];
}
rata_rata = jumlah/40;
cout << "Rata-rata nilai : " << rata_rata<<endl;
cout << "---------------------------------------------------"<< endl;

//siswa yang lulus
cout << "Daftar nama siswa yang lulus"<<endl;
for(int i=0; i< 40 ; i++){
  if(grade[i]> rata_rata){
    cout << name[i]<<endl;
  }
}
cout << "---------------------------------------------------"<< endl;

 //tidak lulus
 cout <<"Daftar nama siswa yang tidak lulus"<<endl;
for(int i=0; i< 40; i++){
  if(grade[i]< rata_rata){
    cout << name[i]<<endl;
  }
}

  input.close();
  return 0;

} 