#include <iostream>
#include "bank.h"


int main(){

    bank* curr = bank::BankHead;
    std::cout << curr->name;


    return 0;
}