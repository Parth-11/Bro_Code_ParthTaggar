#include "User.h"
#include <string>
#include <iostream>
#include <iomanip>
#include "passcheck.h"

// constructor
//  User::User(std::string nameVal,int ageVal,std::string emailIdVal,long phoneNoVal,double amountVal)

// input taker
void User::takeInput()
{
    // will call these fucntions and would be easy to take inputs
    //  from one function call
    this->setName();
    this->setAge();
    this->setEmailId();
    this->setPassword();
    this->setPanCard();
    this->setPhoneNo();
}
// setters
void User::setName()
{
    fflush(stdin);
    std::cout << "Enter your name" << std::endl;
    std::getline(std::cin, name);
}
void User::setAge()
{
    std::cout << "Enter your age" << std::endl;
    std::cin >> age;
}
void User::setEmailId()
{
    fflush(stdin);
    std::cout << "Enter your Email ID" << std::endl;
    std::getline(std::cin, emailId);
}
void User::setPassword()
{
    fflush(stdin);
    std::cout << "Enter your password" << std::endl;
    std::cin >> password;
    //passcheck(password);
    /*remember to call the setPassword fucntion again
    when the user doesn't meet the requirement*/
}
void User::setPanCard()
{
    fflush(stdin);
    std::cout << "Enter the number of your Pan Card" << std::endl;
    std::cin >> panCard;
}
void User::setPhoneNo()
{
    fflush(stdin);
    std::cout << "Enter your phone number" << std::endl;
    std::cin >> phoneNo;
}
void User::setBankDetails()
{
    fflush(stdin);
    std::getline(std::cin, bankName);
    std::cout << "Enter the balance" << std::endl;
    std::cin >> balance;
    savings = 0;
}
// getters
void User::displayPrivateInfo()
{
    std::cout << std::setw(20) << "Name : " << std::setw(12) << name << std::endl;
    std::cout << std::setw(20) << "Age : " << std::setw(12) << age << std::endl;
    std::cout << std::setw(20) << "Email ID : " << std::setw(12) << emailId << std::endl;
    std::cout << std::setw(20) << "Pan Card : " << std::setw(12) << panCard << std::endl;
    std::cout << std::setw(20) << "Phone No. : " << std::setw(12) << phoneNo << std::endl;
}
std::string User::getpassword()
{
    return password;
}

void User::cutTransaction(double cuttransac)
{
    balance = balance - (purchase + (purchase * savingRate));
    savings += purchase * savingRate;
}
void User::checkTransaction()
{
    std::cout << "Enter the amount of the purchase" << std::endl;
    std::cin >> purchase;
    double cutAmount = (purchase + (purchase * savingRate));
    if (cutAmount < balance)
    {
        this->cutTransaction(cutAmount);
    }
    else
    {
        std::cout << "Error the purchase exceeds the balance!!" << std::endl;
    }
}
void User::setting()
{
    std::cout << "Enter the savings rate" << std::endl;
    std::cin >> savingRate;
    std::cout << "Enter the mutual rate" << std::endl;
    std::cin >> mutualRate;
}

int User::returnPaying() const
{
    return purchase;
}

int User::reSavingRate() const
{
    return savingRate;
}

std::string User::getEmail() const
{
    return emailId;
}

std::string User::getName() const
{
    return name;
}

double User::getBal() const
{
    return balance;
}

long User::getPhone() const
{
    return phoneNo;
}

double User::getSave() const
{
    return savings;
}

void User::fname(std::string nameVal)
{
    this->name = nameVal;
}

void User::fBank(std::string bankName)
{
    this->bankName = bankName;
}

void User::fSavings(double savings)
{
    this->savings = savings;
}

void User::fBal(double bal)
{
    this->balance = bal;
}

void User::dispName()
{
    std::cout << this->name << std::endl;
}
