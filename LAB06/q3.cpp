#include <iostream>
using namespace std;

int main (){
    
    int i,j,n;
    cout <<" Segitiga siku-siku"<<endl;
    cout << "-------------------" <<endl;
    
    cout << "n =";
    cin >> n;
//formula
     for (i=1; i<=n; i++) {
     for (j=1; j<=i; j++) {
     cout << "*";
    }
    cout << endl;
    }
  
    return 0;
}