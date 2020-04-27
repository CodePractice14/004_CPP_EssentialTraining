// for.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char string[] = "abcdefg";

    // basic for loop ex1
    for( int i = 0; i < 5; ++i )
    {
        printf("i is %d\n", i);
    }
    cout<<"\n\n\n";
    
    // basic for loop ex2
    for( int i = 0; string[i]; ++i )
    {
        printf("i is %c\n", string[i]);
    }
    cout<<"\n\n\n";

    char string[] = "abcdefg";

    // basic for loop with pointers
    for( char *cp = string; *cp; ++cp )
    {
        printf("*cp is %c\n", *cp);
    }

    cout<<"\n\n\n";

    return 0;
}
