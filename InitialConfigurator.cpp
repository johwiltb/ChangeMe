#include "InitialConfigurator.h"

// Constructors/Destructors
//  

InitialConfigurator::InitialConfigurator () {
  setInitConfigPass();
}

InitialConfigurator::~InitialConfigurator () { }

//  
// Methods
//  
void InitialConfigurator::statusCheck() {
  std::cout << "It works!" << std::endl;
}

// Accessor methods
//  


// Password methods
//  
std::string InitialConfigurator::passInitPassword() {
  return InitConfigPass;
}

void InitialConfigurator::setInitConfigPass() {
  std::string userPass;
  while (userPass.length() < 2 || userPass.length() > 100) {
    std::cout << "Please set initial 2-100 character password: ";
    std::cin >> userPass;
  }
  unsigned char out[SHA512_DIGEST_LENGTH];
  SHA512_CTX sha512;
  SHA512_Init(&sha512);
  SHA512_Update(&sha512, userPass.c_str(), userPass.size());
  SHA512_Final(out, &sha512);
  std::stringstream ss;
  for(int i = 0; i < SHA512_DIGEST_LENGTH; i++)
  {
    ss << std::hex << std::setw(2) << std::setfill('0') << (int)out[i];
  }
  InitConfigPass = ss.str();
  std::cout << "The hash is " << InitConfigPass << std::endl;
}


