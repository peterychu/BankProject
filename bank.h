#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>

class account{

    private:
    static int nextAccNum;

    public:

    account( int balance, std::string name) : balance(balance), acc_name(name), next(nullptr), prev(nullptr) {
        acc_num = ++nextAccNum;
    }

    int acc_num;
    int balance;
    std::string acc_name;

    account* next;
    account* prev;

    std::string getAccName();
    std::string getBalance(account* acc);
    std::string getAccNum();
    
    // friend std::ostream & std::operator<<(std::ostream &, account*);

};

class bank{
    public:

    static bank* BankHead;
    bank* next; 
    bank* prev;
    std::string name; 

    bank(std::string name);
    // void createBank(std::string name);
    void createAccount(int b, std::string n);
    account* AccHead;

    friend std::ostream& operator<<(std::ostream&, const bank&);
    friend std::ostream& operator<<(std::ostream &, account*);
};

// bank* Bankhead = nullptr;
void createBank(std::string name);
// void createBank(std::string name);





#endif