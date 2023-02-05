#include "backend.hpp"
#include "User.h"
#include <string>

void createFile(User &p){
    std::fstream file;
    std::string fileName;
    fileName=  (p.getEmail()).substr(0,(p.getEmail()).find('@')+1);
    
    file.open(fileName,std::ios::out);
    file << p.getName() << std::endl;
    file << p.getEmail() << std::endl;
    file << p.getpassword() << std::endl;
    file << p.getBal() << std::endl;
    file << p.getPhone() << std::endl;
    file << p.getSave() << std::endl;

    file.close();
}

void readFile(User &p){
    
  std::fstream file;
  std::string fileName;
  fileName = (p.getEmail()).substr(0,(p.getEmail()).find('@')+1)+".txt";
  file.open (fileName, std::ios::in | std::ios::out);

  // Fetching Data
  std::string name;
  std::string bank;
  double savings;
  double balance;
//   double expense;

  int lineNumber = 0;

  while (1) {
    lineNumber++;

    char line[200];

    switch (lineNumber) {
      case 1:
        file >> name;
        p.fname(name);
      case 2:
        file >> bank;
        p.fBank(bank);
      case 3:
        file >> line;
        savings = (double)strtod(line, NULL);
        p.fSavings(savings);
      case 4:
        file >> line;
        balance=(double)strtod(line,NULL);
        p.fBal(balance);

    //   case 4:
    //     file >> line;
    //     expense = (float)strtod(line, NULL);
      default:
        file >> line;
    }

    if (file.eof()) break;
  }

  file.close();
}