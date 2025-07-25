#include <iostream>
#include "TicketMachine.h"

using namespace std;

int main() {

    int money;
    int balance;

    TicketMachine tm;

    tm.showPrompt();
    
    tm.insertMoney(money, balance);

    tm.printTicket(balance);

    return 0;
}