#include <iostream>
#include "InitialConfigurator.h"
#include "TokenHandler.h"

using namespace std;

int main()
{
  cout << "Welcome to the beginning..." << endl;
  cout << "This is where it will all begin..." <<endl;
  static InitialConfigurator* initConf = new InitialConfigurator();
  initConf->statusCheck();
  TokenHandler* th = new TokenHandler(*initConf);
  th->checkPassTest();
  return 0;
}

