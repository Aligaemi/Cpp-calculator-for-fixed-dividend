#include <iostream>
#include <conio.h>
using namespace std;
void print_n_times(char my_char, int count) { cout << string(count, my_char) << endl; }
int main()
{
    int i, duration = 0;
    long long monthlyloanpayment, totalloan, y, total, monthlypercent = 0, n, dividend = 0, rent, beforerent = 0, xrate = 0, toman, afterrent, period, loan, rate;

    cout << "Enter today's exchange Rate:    ", cin >> xrate, cout << "\n\nEnter Amount in toman to exchange to TL:    ", cin >> toman, cout << "\n\nTotal Tl is:    ", cout << toman / xrate, cout << endl, cout << endl;
    total = toman / xrate; //total in Lira
    cout << "\nTotal amount to be put in the Bank is:    ", cout << total, cout << " tl" << endl << endl;
    cout << "\nEnter Rent Amount:    ", cin >> rent, cout << endl;
    cout << "\nEnter duration of the stay in months:    ", cin >> duration, cout << endl;
    cout << "\nEnter Yearly dividend percent in Banks:    ", cin >> y, cout << "\n\nMonthly dividend is:    ", monthlypercent = y / 12, cout << monthlypercent << " percent" << endl << endl;
    
    cout << "\nEnter the Amount of loan in toman:   ", cin >> loan, cout << endl;
    cout << "\nEnter loan's intrest rate:           ", cin >> rate, cout << endl;
    cout << "\nEnter return period in months:       ", cin >> period, cout << endl;
    int count = 40;
    char my_char = '*';
    std::cout << "\n", cout << std::string(count = 55, my_char) << endl;
    totalloan = loan + ((loan * rate) / 100);
    monthlyloanpayment = (totalloan / xrate) / period;
    cout << "\nTotal amount of loan is:           " << totalloan << endl;
    cout << "\nTotal amount of loan in Lira is:   " << totalloan / xrate << endl;
    cout << "\nmonthly loan payment is:           " << monthlyloanpayment << endl;
    cout << "\nThe amount that should be invested to pay the loan is:\n";
    cout << endl << (monthlyloanpayment * 100) / monthlypercent << endl;//prints the calculated amount that should be put to bank

    std::cout << "\n", cout << std::string(count = 55, my_char) << endl;//divide(*****)

    //===================================================================================================
    
    for (i = 1; i <= duration; i++){
        cout << "\nTotal beforerent:      " << total << endl;
        n = total * monthlypercent;
        n = n / 100;//monthly dividend amount//
        
        dividend += n; //put n into dividend 
        total = total + n - rent - monthlyloanpayment; //total plus dividend
        
        cout << "dividend:             +" << n;
        cout << "\nrent:                 -" << rent;
        cout << "\nmonthly loan payment: -" << monthlyloanpayment << endl;
        cout << endl << "Total after rent:     " << total << endl;
        std::cout << std::string(count = 30, my_char = '_') << endl, cout << std::string(count = 30, my_char = '_') << endl;
        }
    cout << endl << "\n\nAmount left:   " << total << endl;
}