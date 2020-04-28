#include <cstdio>
using namespace std;

int main()
{
    int x = 5;
    size_t y = sizeof x;
    printf("size of x is %zd\n", y);    
    
    struct structure_X
    {
        int a;
        int b;
        char c;
        char d;
        long long int e;
        long long int f;
    };

    printf("size of structure_X is %zd\n", sizeof(structure_X)); 
   
    return 0;
}
