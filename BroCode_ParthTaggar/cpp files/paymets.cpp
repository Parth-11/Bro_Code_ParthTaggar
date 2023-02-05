#include "payments.hpp"

void inputPay(int val){
    
}

void paying(User p){
    std::cout << "The amount paid:" << p.returnPaying() << std::endl;
}

void saving(User p){
    std::cout << "The savings:" << p.returnPaying()*p.reSavingRate() << std::endl;
}

void total(User p){
    std::cout << "The total amount is:" << p.returnPaying() + p.returnPaying()*p.reSavingRate() << std::endl;
}