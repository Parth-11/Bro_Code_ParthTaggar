#ifndef _USER_H_
#define _USER_H_
#include <iostream>
class User
{
public:
    // private details
    std::string name;
    int age;
    std::string emailId;
    std::string password;
    std::string panCard;
    long long phoneNo;
    // bank detials
    std::string bankName;
    double balance;
    // Savings
    double savings{0};
    //Purchases
    double purchase;
    //settings rate
    double savingRate{0.05};
    double mutualRate;



    // default parameter constructor
    User(std::string name = "",
         int age =0, 
         std::string emailId = "", 
         std::string panCard = "", 
         long phoneNo =0, 
         std::string bankName = "", 
         double balance =0.0){
            this->name=name;
            this->age=age;
            this->bankName=bankName;
            this->emailId=emailId;
            this->panCard=panCard;
            this->balance=balance;
            this->phoneNo=phoneNo;
         }
    // methods

    // setters
    void takeInput();
    void setName();
    void setAge();
    void setEmailId();
    void setPassword();
    void setPanCard();
    void setPhoneNo();
    void setBankDetails();
    void fname(std::string);
    void fBank(std::string);
    void fSavings(double);
    void fBal(double);
    void dispName();
    // getters
    void displayPrivateInfo();
    void displaybankDetails();
    void displaySavings();
    void dispMf();
    std::string getpassword();
    std::string getEmail() const;
    std::string getName() const;
    double getSave() const;
    double getBal() const;
    long getPhone() const;
    int returnPaying() const;
    int reSavingRate() const;
    //app functions
    //transaction function
    void checkTransaction();
    void cutTransaction(double);
    //setting function
    void setting();
};
#endif