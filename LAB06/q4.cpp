#include <iostream>
using namespace std;

int main (){
    
    int i,j,n;
    cout <<" Pola"<<endl;
    cout << "-------------------" <<endl;
    
    cout << "n =";
    cin >> n;

     for (i=0; i<=n; i++) {
     for (j=0; j<=i; j++) {
     cout << "*";
    }
    cout << endl;
    }
     for (i=n-1; i>=0; i--) {
     for (j=0; j<=i; j++) {
     cout << "*";
    }
    cout << endl;
    }
  
    return 0;
}