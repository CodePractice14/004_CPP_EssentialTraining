#include <cstdio>
using namespace std;

int main()
{
    int ia[] = { 1, 2, 3, 4, 5 };
    for( auto i : ia ) 
    {
        printf("i is %d\n", i);
    }

    /*won't work on Linux. 
    * Because _MSC_VER is a Windows Specific Macro
    * More details here:
    * https://docs.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=vs-2019
    */
    //printf("msc version is %d\n", _MSC_VER);

    return 0;
}
