#include <iostream>
#include <string>
#include <fstream>
#include "User.h"
#include "backend.hpp"

void inputDets(User &obj)
{
    std::string email, pass;
    std::cout << "Enter your email" << std::endl;
    std::cin >> email;
    
    std::string temp = email.substr(0,email.find('@')+1)+".txt";
    std::ifstream file;
    file.open(temp);
    if(file){
        readFile(obj);
        while(true){

            std::cout << "Enter your password" << std::endl;
            std::cin >> pass;
            //file reades data
                if (pass == obj.getpassword())
                {
                    std::cout << "Logged In..." << std::endl;
                    break;
                }
                else
                {
                    std::cout << "Wrong password..." << std::endl;
                    system("cls");
                }
        }
    }else{
        std::cout << "You haven't registered in the app" << std::endl;
        main();
    }
}