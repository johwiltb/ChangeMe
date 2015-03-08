
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


  TokenHandler (InitialConfigurator ic);

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
  void checkPassTest();

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  

  // Protected Methods
  bool checkPass(std::string pass);

private:

  // Static Private attributes
  //  

  // Private attributes
  //  
  std::string configPass;
  //static bool configCreated;

  // Private attribute accessor methods
  //  

  // Other Private Methods
  void getConfigPass(InitialConfigurator ic);


};

#endif // TOKENHANDLER_H
