#include<iostream>
using namespace std;

//fungsi untuk mencari pow
int pow(int inx, int powx) {
	int result = inx;
//code
	for(int i = 1; i < powx; i++) {
		result *= inx;
	}
	return result;
}
//fungsi untuk mencari sqrt
double sqrt(double n) {
	double x = n;
	double y = 1;
//code	
	while (x > y) {
		x = (x + y) / 2;
		y = n / x;
	}
	return x;
}
//fungsi untu mencari ceil
//code
int ceil(double inx) {
	int returnx;
	returnx = inx;
	returnx += 1;
	
	return returnx;
}
//fungsi untuk mencari floor
int floor(double inx) {
//code
	int returnx;
	returnx = inx;
	return returnx;
}

int main ( ) {
	double x;
	int y;
	cout <<"Enter the num "<<endl;
	cin >> x >> y;
	
  //Output
  //output untuk pow
	cout << "Pow(" <<x<<", "<<y<<")  is " << pow(x,y) <<endl;

  //output untuk sqrt
	cout << "Sqrt of " << y << " is " << sqrt(y) <<endl;

  //outpout untuk ceil
	cout << "ceil of " << x << " is " << ceil(x) <<endl;

  //output untuk floor
	cout << "Floor of " << x << " is " << floor(x) <<endl;

  return 0;
 }