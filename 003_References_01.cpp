#include <cstdio>
using namespace std;

/***
 * More details about Pointer vs Refference here;
 * https://www.geeksforgeeks.org/pointers-vs-references-cpp/
 ***/

int main()
{
    int x = 7;
    int *ip = &x;
    int &y = x;
 
    //x = 5; 
    y = 42;

    int z = 73;
    ip = &z;

    printf("Value of *ip is %d\n", *ip);
    printf("Value of x is %d\n", x);
    printf("Value of y is %d\n",  y);
    printf("Value of z is %d\n",  z);
    

    return 0;
}
