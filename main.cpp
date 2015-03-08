#include <iostream>
#include "InitialConfigurator.h"

using namespace std;

int main()
{
  cout << "Welcome to the beginning..." << endl;
  cout << "This is where it will all begin..." <<endl;
  InitialConfigurator* initConf = new InitialConfigurator();
  initConf->statusCheck();
  return 0;
}

