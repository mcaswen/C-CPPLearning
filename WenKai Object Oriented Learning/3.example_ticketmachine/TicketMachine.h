
#ifndef TICKETMACHINE_H

#define TICKETMACHINE_H


class TicketMachine {

public:
    
    TicketMachine();
    virtual ~TicketMachine();

    void showPrompt();
    void insertMoney(int &money, int &balance);
    void printTicket(int &balance);
    void showBalance(int &balance);
    void printerror();

private:
    
    const int PRICE;
    int total;
    int balance;

};

#endif