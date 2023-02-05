#include <iostream>
#include "login.hpp"
#include "User.h"
#include "backend.hpp"

int main()
{
    std::cout << "name of the app" << std::endl;
    User acc;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "0.)Login\t\t\t1.)Register" << std::endl;
    std::cout << "Enter the choice:";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 0:
        inputdets(acc);
        //check if the database exists!!
        //successful login disp home page and option to swtich to payments
        break;
    case 1:
        acc.takeInput();
        createFile(acc);
        //read file
    default:
        std::cout << "Choose a valid input" << std::endl;
        system("cls");
        main();
    }
}