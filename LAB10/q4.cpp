#include <iostream>
using namespace std;
//declare function
void  totnum( int tot, int& yyyy,int& mm, int& dd ){
yyyy = tot/365;
tot %= 365;
mm = tot/30;
tot %= 30;
dd = tot;
}
//mengeksekusi fungsi
int main(){
 int h,i,j,k;

 cout << "Number of days :" << endl;
 cin >> h;

 totnum (h,i,j,k);
 cout << i << "years\n" <<endl;
 cout << j << "months\n" <<endl;
 cout << k << "days\n" <<endl;

}