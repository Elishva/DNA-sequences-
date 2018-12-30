#include "execute.h"
#include <cstdio>
int main()
{
    
    printf("----------------------HELLO TO MY SHELL------------------------\n");
    Execute *execute = new Execute;
   // while(1) 
    //{
       
        
        if(execute->run()==false)
          return 0; 


    //}

    printf("----------------------END TO MY SHELL------------------------\n");
    return 0;
}
