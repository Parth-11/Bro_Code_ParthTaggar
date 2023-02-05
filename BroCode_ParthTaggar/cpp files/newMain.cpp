#include "User.h"
#include <iostream>
#include "home.hpp"
#include "payments.hpp"

int main(){


User acc[2];
acc[0].name = "Parth Taggar";
acc[0].age = 18;
acc[0].emailId = "parthtaggar123@gmail.com";
acc[0].password = "IDontKnow";
acc[0].panCard = "12345ADGFJ";
acc[0].phoneNo = 9529888863;

acc[0].bankName = "ICICI";
acc[0].balance = 317630.46;
acc[0].savings = 57546.32;

acc[1].name = "Raghav Khedar";
acc[1].age = 18;
acc[1].emailId = "raghavkhedar123@gmail.com";
acc[1].password = "IDontKnow";
acc[1].panCard = "145AD45GFJ";
acc[1].phoneNo = 9529888823;

acc[1].bankName = "ICICI";
acc[1].balance = 119630.46;
acc[1].savings=14546.32;

    acc[0].dispName();
    
    std::cout << "=========================" << std::endl;
    std::cout << acc[0].getBal() << std::endl;
    std::cout << "=========================" << std::endl;

    std::cout << "0)Pay\t1)History\t2)Savings" << std::endl;

    std::cout << std::endl;

    std::cout << "=============================" << std::endl;
    std::cout << "Bank savings:" << acc[0].getBal() << std::endl;
    std::cout << "Mutual Funds:" << 78662.48 << std::endl;
    std::cout << "Last 30 day Expenditure:" << 14356.25 <<  std::endl;

    std::cout << "To access the options enter the val:";
    int count;
    std::cin >> count;
    switch(count){
        case 0:
            std::cout << "Enter the amount to be paid:";
            std::cin >> acc[0].purchase;

    }

    return 0;
}