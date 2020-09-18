#include <iostream>
using namespace std;
int main() {
  // from celcius to fahrenheit
	cout<<"convert temperature in celcius to fahrenheit"<<endl;
	float c, f;
	cout<<"Temperature in celcius : ";
	cin>>c;
	// formula
	f=(c*1.8)+32;
	
	cout<<endl;
	cout<<"From celcius to fahrenheit:"<<endl;

	cout<<"Fahrenheit : "<<f<<endl;
	
	return 0;
}