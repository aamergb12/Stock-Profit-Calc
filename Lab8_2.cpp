/*
Aamer Goual-Belhamidi
Programming Fundamentals
CS1436.008
11/10/2023
11/16/2023
11/16/2023
*/
// Stock Profit Lab 8_2

//program calculates stock profit based on bought values and sell values
#include <iostream>
#include <iomanip>
//header file for rounding
using namespace std;

double profit(int& NS, double& SP, double& SC, double& PP, double& PC);
//prototype

int main() {

int NS;
double SP, SC, PP, PC;
//declaring functions
cout << "enter your stock information:\n";

cout << profit(NS, SP, SC, PP, PC);

//calling the function
    return 0;

}
// int main basically running the whole program off the other function

double profit(int& NS, double& SP, double& SC, double& PP, double& PC){
//using ampersand to change initial definitions in the main
    cout << "what is the number of shares? $";
    cin >> NS;
    cout << "what is the sale price per share? $";
    cin >> SP;
    cout << "what is the sale commission paid? $";
    cin >> SC;
    cout << "what is the purchase price per share? $";
    cin >> PP;
    cout << "what is the purchase commission paid? $";
    cin >> PC;
//user enters values
    double profit1 = ((NS*SP)-SC) - ((NS*PP)+PC);

    cout << setprecision(2) << fixed << "\n\nthe profit or loss from the stock sale is : $ " << profit1 ;
//calulates the value profit1
    return profit1;
//returns double value to the main
}