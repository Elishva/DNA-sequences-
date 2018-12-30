#include "execute.h"
#include <cstdio>
int main()
{
    

    Execute *execute = new Execute;
    while(1) 
    {
       
        if(execute->run()==false)
          return 0; 


    }


    return 0;
}
