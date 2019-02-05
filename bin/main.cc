//Tyler Elliott
//CS3650
//2-04-2019

#include <iostream>
#include <string>
#include <stdio.h>
#include "replace.h"

using namespace std;

int main(int argc, char ** argv)
{
  std::string target = argv[1]; //The string being changed
  std::string change = argv[2]; //What target is being changed into

  repl(target, change); //Call repl to change target (if any)

  return 0;
}
