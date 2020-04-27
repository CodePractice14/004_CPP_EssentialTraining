
#include <iostream>
using namespace std;
/***

 The cout class is part of the standard C++ library
  and it works quite a bit differently than puts or printf, which are part of the standard C library. 
    In fact, cout works quite a bit differently from other objects and classes or anything else in C++. 
    
    You'll notice right away that 
    -> instead of including cstdio, the standard I/O library from C, 
    -> I'm including iostream, which is part of the standard template library, the STL. 
        cout is an STL class and it overloads the bitwise left shift operator, which is this two left angle brackets.
         It overloads this operator to send a stream of characters to the standard output stream. 
         It's very common in C++ and you'll see it used a lot. 
         
         cout can be very convenient. 


More details here
https://www.linkedin.com/learning/c-plus-plus-essential-training-2/using-stdout
***/

int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
