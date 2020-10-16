#include <iostream>
using namespace std;

int main (){


    cout <<"Menampilkan angka 1-100"<<endl;
    cout << "-------------------" <<endl;
    cout << " Hanya kelipatan 3 tidak dengan kelipatan 5 " <<endl;
    cout << "-------------------" << endl;

// menyatakan btasan, dan kelipatan yang akan muncul
    int i;
    for (i=0; i<100; i+=3) {
        if (i % 5 == 0 ){
            continue;
    }
    cout << i << endl;
 }
 return 0;
}