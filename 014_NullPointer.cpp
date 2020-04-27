#include <cstdio>
using namespace std;

#ifndef NULL
#define NULL (0LL) /* common C++ definition */
#endif

void f( int i ) {
    printf("the int is %d\n", i);
}

void f( const char * s ) {
    printf("the pointer is %p\n",  s);
}


/***
 *  The null pointer constant provides a much needed value to be used 
 *   where the traditional null void pointer value has been used in C but doesn't work in C++. 
 * 
 *  It resolves the ambiguity problem and it can be used in any context of any pointer type. 
 ***/


int main() {
    f(0);
    //or
    f(nullptr);
    return 0;
}
