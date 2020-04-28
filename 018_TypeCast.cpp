#include <cstdio>
using namespace std;

int main()
{
    int x = 5;
    long long int y;
    y = x;
    x = (int) y; //type cast


    printf("x is %d\n", x);
    printf("y is %lld\n", y);
    return 0;
}
