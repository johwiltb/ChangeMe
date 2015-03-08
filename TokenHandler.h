
#ifndef TOKENHANDLER_H
#define TOKENHANDLER_H

#include <string>
#include "InitialConfigurator.h"
/**
  * class TokenHandler
  * 
  */

class TokenHandler
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  TokenHandler ();

  /**
   * Empty Destructor
   */
  virtual ~TokenHandler ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  

  // Protected Methods
  void checkPass();

private:

  // Static Private attributes
  //  

  // Private attributes
  //  
  std::string configPass;

  // Private attribute accessor methods
  //  

  // Other Private Methods
  std::string getConfigPass(InitialConfigurator ic);


};

#endif // TOKENHANDLER_H
