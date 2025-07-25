#include "TicketMachine.h"
#include <iostream>
using namespace std;

TicketMachine::TicketMachine() : PRICE(10), total(0), balance(0) {
}

TicketMachine::~TicketMachine() {
}

void TicketMachine::showPrompt() {

    cout << "Price is " << PRICE << "." << endl;

}

void TicketMachine::insertMoney(int &money, int &balance) { //:: resolver, 表示某个类中的函数/变量，若前为空则寻找全局变量/函数

    cout << "Please put money in." << endl;
    cin >> money;

    balance += money;

}

void TicketMachine::printTicket(int &balance) {

        if (balance >= PRICE) {
            cout << "PRINT COMPLETE." << endl;
            balance -= PRICE;
            showBalance(balance);

            cout << "Continue printing?" << endl;
            string isprint;
            cin >> isprint;
            
            if (isprint == "yes")
                printTicket(balance);

            else 
                balance = 0;
                cout << "THANKS FOR BUYING." << endl;


        }

        else {
            
            showBalance(balance);
            cout << "Balance inadequate." << endl;
        
        }

}

void TicketMachine::showBalance(int &balance) {

        cout << balance << " yuan left." << endl;

}