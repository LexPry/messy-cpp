/*
    For this program I will be using US dollars and cents.

    Write a program that asks the user to enter the following:
    An integer representing the number of cents

    You can assume that the number of cents entered is greater than or equal to zero

    The program should then display how to provice that change to the user.

    In the US:
        1 dollar is 100 cents
        1 quarter is 25 cents
        1 dime is 10 cents
        1 nickel is 5 cents, and
        1 penny is 1 cent.

    Sample:

    Enter an amount in cents: 92

    You can provide the change as follows:
    dollars :0
    quarters :3
    dimes :1
    nickels :1
    pennies :2

    Feel free to use your own currency system.
    Also, think of how you might solve the problem using the modulo operator.


    outline:
    Input number in cents
    break down number into how many of each will be used
    out put each.
*/

#include <iostream>
using namespace std;

int main()
{
    // Refactored code

    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickle_value {5};

    int change_amount {};

    int balance,dollars,quarters,dimes,nickles,pennies {};

    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);

    quarters = balance / quarter_value;
    balance -= (quarters * quarter_value);

    dimes = balance / dime_value;
    balance -= (dimes * dime_value);

    nickles = balance / nickle_value;
    balance -=  (nickles * nickle_value);

    pennies = balance;

//    original code I wrote
//    int cents {0};
//    const int dollars {100};
//    const int quarter {25};
//    const int dime {10};
//    const int nickle {5};
//    const int penny {1};
//
//
//    int dollars_needed = cents / dollars; // 0
//    int quarters_needed = (cents - (dollars_needed * dollars)) / quarter; // 3
//    int dimes_needed = (cents - (quarters_needed * quarter)) / dime; // 1
//    int nickles_needed = (cents - ((dimes_needed * dime) + (quarters_needed * quarter))) / nickle; // 1
//    int pennies_needed = (cents - ((dollars_needed * dollars) + (quarters_needed * quarter) + (dimes_needed * dime) + (nickles_needed * nickle))) / penny; //2
//
    cout << "\nYou can break it up into: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;


    cout << endl;
    return 0;
}

