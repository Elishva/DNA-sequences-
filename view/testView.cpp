#include "CLI.h"

#include <iostream>
#include <cstring>
int main()
{

   CLI c;
   char ** command = c.getCommand_from_user();
   std::cout <<"GET COMMAND " << c. getCommand() << std::endl;
   //check parser


   for(int i = 0; i < 3; ++i)
    std::cout <<" AFTER PARSER VALUE: " <<i << " " <<  command[i]<<std::endl;

   
   
   std::cout << "SUCSES";
   return 0;
}
