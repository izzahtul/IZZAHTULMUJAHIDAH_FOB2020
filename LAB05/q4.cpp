    #include <iostream>
using namespace std;

int main (){
    
    int balance = 500; 
    int choose; 
    int deposit; 
    int withdraw;
    char status;
    
    cout << "Welcome to the ATM Simulation " << endl;
    cout << "Menu" << endl;
    cout << "1. Balance " << endl;
    cout << "2.Deposit " << endl;
    cout << "3.Withdraw" << endl;
    cout << "4. Quit " << endl;
    cin >>  choose ;
    
    switch ( choose ) {
        case 1 :
        do {
            cout << "Your balance = " << balance << endl;
            cout << "Do you want to check your balance ? ( Y = balance / N = Back to menu ) : " << endl ;
            cin >> status ; }
            while (status == 'Y' || status == 'y' );
        break ;
    
        case 2 :
        do {
            cout << "Enter number do you want to deposit" << endl;
            cin >> deposit;
             
            balance = balanca + deposit;
            
            cout << "Your balance now" << balance << endl;
            cout << "Do you want to deposit again?" << endl;
            cout << "(Y = deposit again / N = back to the menu ) :" ;
            cin >> status;}
            while (status == 'Y' || status == 'y');
            
        case 3 :
        do {
            cout << "Your balance now : " << balance << endl;
            cout << "How much do you want to withdraw? : ";
            cin >> withdraw;
            
            balance = balance - withdraw;
            
            cout << "Do you want to withdraw again?" << endl;
            cout << "(Y = withdraw again / N = back to the menu ) :" ;
             cin >> status;}
            while (status == 'Y' || status == 'y');
            
        case 4 :
            cout <<"Thank you " <<endl;
            
            return 0;
    }
            