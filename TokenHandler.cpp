#include "TokenHandler.h"
static bool configCreated = false;
static std::string configPass;

// Constructors/Destructors
//  

TokenHandler::TokenHandler () {
  if (configPass.empty())
    getConfigPass();
}
TokenHandler::~TokenHandler () { }

//  
// Methods
//  
void TokenHandler::getConfigPass() {
  while (!configCreated) {
   InitialConfigurator* ic = new InitialConfigurator;
   configPass = ic->passInitPassword();
   delete ic;
   configCreated = true;
  }
}

bool TokenHandler::checkPass(std::string pass){
  unsigned char out[SHA512_DIGEST_LENGTH];
  SHA512_CTX sha512;
  SHA512_Init(&sha512);
  SHA512_Update(&sha512, pass.c_str(), pass.size());
  SHA512_Final(out, &sha512);
  std::stringstream ss;
  for(int i = 0; i < SHA512_DIGEST_LENGTH; i++)
  {
    ss << std::hex << std::setw(2) << std::setfill('0') << (int)out[i];
  }
  std::string test = ss.str();
  return (configPass == test);
}

void TokenHandler::checkPassTest() {
  std::string testpass;
  bool passed;
  std::cout << "Password? ";
  std::cin >> testpass;
  passed = checkPass(testpass);
  if (passed)
      std::cout << "correct!";
  else
    std::cout <<"wrong!";
  std::cout << std::endl;
}

// Accessor methods
//  


