#include <iostream>
using namespace std;

int main (){
int count = 0;
int total = 0;
int score = 0;
int n1 = rand() % 10;
int n2 = rand() % 10;
int correct = n1 + n2;
int answer ;

    cout << "Welcome to the math quiz " << endl;
    cout <<"---------------------------------" << endl;
    cout << " Enjoy the quiz" << endl ;
    
    while ( count <=10) {
        srand(time(NULL));
        n1 = rand() % 10 ;
        n2 = rand() % 10 ;
        correct = n1 + n2;
    cout << n1 << " + " << n2 << endl;
    cin >> answer ;
    count++;
    
    if (answer == correct)
    {
        score++;
            cout << "Correct!" << endl;
    }
    else if ( answer != correct)
    {
        score--;
        cout << " Incorrect!" << endl;
    }
    }
    
    cout << "Your final grade is" <<" score" << "Out of 10" << endl;
    return 0 ;
}