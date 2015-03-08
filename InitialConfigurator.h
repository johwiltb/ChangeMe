
#ifndef INITIALCONFIGURATOR_H
#define INITIALCONFIGURATOR_H

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <openssl/sha.h>
/**
  * class InitialConfigurator
  * 
  */

class InitialConfigurator
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  InitialConfigurator ();

  /**
   * Empty Destructor
   */
  virtual ~InitialConfigurator ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Other public methods
  //  
  void statusCheck();
  std::string passInitPassword();


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

  // Protected attribute accessor methods
  //  

  // Protected other methods
  //  

private:

  // Static Private attributes
  //  

  // Private attributes
  //  
  std::string InitConfigPass;

  // Private attribute accessor methods
  //  

  // Private other methods
  //  
  void setInitConfigPass();

};

#endif // INITIALCONFIGURATOR_H
