#include "bank.h"

#include <iostream>
#include <string>

// Acccount num global var
int account::nextAccNum = 0;


// Account functions

std::string account::getAccName(){
    return this->acc_name;
}


std::string account::getBalance(account* acc){
    return std::to_string(acc->balance);
}

std::string account::getAccNum(){
    return std::to_string(this->acc_num);
}


// Bank functions 
// bank::bank(st){
//     BankHead = nullptr;

// }

bank::bank(std::string name){
    this->name = name;
    this->next = nullptr; 
    this->prev = nullptr;
    this->AccHead = nullptr;
}

// void bank::createBank(std::string name){
//     bank* temp = new bank(name);

//     if(BankHead == nullptr){
//         BankHead = temp;
//         return;
//     }

//     bank* newBank = BankHead;
//     while(newBank->next != nullptr){
//         newBank = newBank->next;
//     }

//     newBank->next = temp;

//     delete temp;    
// }




void bank::createAccount(int b, std::string n){
    
    account* temp = new account(b, n);
    
    if(AccHead == nullptr){
        AccHead = temp;
        return;
    }
    
    account* newAcc = AccHead;
    while(newAcc->next != nullptr){
        newAcc = newAcc->next;
    }

    newAcc->next = temp;
    temp->prev = newAcc;
}

// static bank* BankHead;
// void createBank(std::string name){
//     bank* temp = new bank(name);

//     if(BankHead == nullptr){
//         BankHead = temp;
//         return;
//     }

//     bank* newBank = BankHead;
//     while(newBank->next != nullptr){
//         newBank = newBank->next;
//     }

//     newBank->next = temp;

//     delete temp;    
// }



std::ostream& operator<<(std::ostream& os, const bank& bank){
    account* temp = bank.AccHead;

    if(temp == nullptr){
        return os;
    }

    if(temp->next == nullptr){
        os << temp->acc_num << ":" << temp->balance << " ";

        return os;
    }

    else{

        while(temp != nullptr){
            os << temp->acc_num << ":" << temp->balance << " ";
            temp = temp->next;
        }
    }

    return os;

}


std::ostream & operator<<(std::ostream& os, account* posAcc){
    account* temp = posAcc;

    if(temp == nullptr){
        return os;
    }

    if(temp->next == nullptr){
        os << temp->acc_num << ":" << temp->balance;
        return os;
    }

    else{
        while(temp != nullptr){
            os << temp->acc_num << ":" << temp->balance;
            temp = temp ->next;
            
        }
    }

    return os;

}

bank* bank::BankHead = nullptr;

void createBank(std::string name){
    bank* temp = new bank(name);

    if(bank::BankHead == nullptr){
        bank::BankHead = temp;
        return;
    }

    bank* newBank = bank::BankHead;
    while(newBank->next != nullptr){
        newBank = newBank->next;
    }

    newBank->next = temp;
    temp->prev = newBank; 
}


// design

// you can look at accounts one by one and see their acc #, bal, name
// As res as the bank person you can choose to add or subtract bal
// Maybe add credit score?

// make function to display list of all people in the bank 5 at a time; 