#include <cstdio>
#include "FunctionHeader.h"

/***
 *  File inclusion makes it easy to handle collections of #defines and declarations (among other things). Any source line of the form
 *      #include "filename"
 *          or
 *      #include <filename>
 *  is replaced by the contents of the file filename. 
 * If the filename is --->>>quoted<<<---, searching for the file typically begins where the source program was found; 
 * if it is not found there, or if the name is enclosed in < and >, seaching follows an implementation-defined rule to find the file. 

*/
using namespace std;

int main()
{
    puts("this is main()");
    func();
    return 0;
}

void func()
{
    puts("this is func()");
}