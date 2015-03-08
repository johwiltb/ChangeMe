#include "TokenHandler.h"

// Constructors/Destructors
//  

TokenHandler::TokenHandler () {
}

TokenHandler::~TokenHandler () { }

//  
// Methods
//  
std::string TokenHandler::getConfigPass(InitialConfigurator ic) {
  return ic.passInitPassword();
}

void TokenHandler::checkPass(){

}

// Accessor methods
//  


