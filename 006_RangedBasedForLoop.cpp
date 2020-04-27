// for.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};

    // basic for loop ex
    for(int i : array)
    {
        printf("i is %d\n", i);
    }
    cout<<"\n\n\n";


    char s[] = "string";

    for(char c : s)
    {
        if(c == 0) break; //so we don't print the null char
        printf("c is %c\n", c);
    }
    cout<<"\n\n\n";
    
    return 0;
}
