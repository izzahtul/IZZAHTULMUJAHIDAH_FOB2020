#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main (){
  //baca file
  ifstream input;
  input.open("lab11_grade.txt");

  if(input.fail()){
    cout <<" ERROR; File could not open."<<endl;
    exit(1);
  }

  const int arr_size = 40;

  string nama[40];
  double nilai[40];

  int i=0;
  string line;

  while(getline(input, line)) {
    int nam_end = line.find('-')-1;
    nama[i]=line.substr(0, nam_end);
    int awal= line.find('-')+1;
    int akhir = line.find('\n');
    nilai[i]=stod(line.substr(awal, akhir));
    ++i;
  }

cout <<endl;
//Descending
cout << "Descending"<<endl;
cout <<"==========================================="<<endl;
  for(int i=0; i<40-1; i++) {
    for(int j=i+1; j<40; j++) {
      if(nilai[i]<nilai[j]) {
        string sqnc = nama[i];
        nama[i] = nama[j];
        nama[j] = sqnc;
        int rating = nilai[i];
        nilai[i] = nilai[j];
        nilai[j] = rating;
      }
    }
  }
  for(int i=0; i< 40; i++) {
    cout << nama[i] <<" = "<<nilai[i] <<endl;
  }

cout << endl;
//Ascending
  cout << "Ascending"<<endl;
  cout <<"==========================================="<<endl;
  for(int i=0; i<40-1; i++) {
    for(int j=i+1; j<40; j++) {
      if(nilai[i]>nilai[j]) {
        string sqnc = nama[i];
        nama[i] = nama[j];
        nama[j] = sqnc;
        int rating = nilai[i];
        nilai[i] = nilai[j];
        nilai[j] = rating;
      }
    }
  }
  for(int i=0; i< 40; i++) {
    cout << nama[i] <<" = "<<nilai[i] <<endl;
  }
  cout <<endl;


  input.close();
  return 0;

} 