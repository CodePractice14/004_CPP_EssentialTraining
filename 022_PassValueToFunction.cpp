#include <cstdio>
#include <string>
using namespace std;


void func_byValue(int i)
{
    i = 10;
    printf("value of i inside func_byValue() is %d\n", i);
}
void func_byRefference(int & i)
{
    /***
     *  All I've done is add that ampersand and changed this to a call-by-reference instead of call-by-value, 
     *   and when I build and run this, you'll see that I've actually been able to change this i down here, 
     *   because after the function call the i is now 10. 
     * 
     *  And you'll notice that from the perspective of the caller, nothing has changed. 
     *  So obviously this can be dangerous if your caller does not realize that 
     *      ---> this function is calling by reference rather than by value. 
     */

    i = 10;
    printf("value of i inside func_byRefference() is %d\n", i);
}
void func_byPointer(int *i)
{
    /*** 
     * So, instead of all this, I can say int * i
     *  And now, in main, I'm not allowed to just pass an integer, 
     *  I have to actually pass an address of an integer using the ampersand down here. 
     * 
     * The address-of operator, as I like to call it, but it's actually a reference operator. 
     * And now when I build and run, I still have my side effect, but 
     *     ---> it's more obvious that I have the side effect from the caller's side because I've actually passed an address, 
     * 
     * I've passed a pointer rather than just a reference. 
     */

    *i = 15;
    printf("value of i inside func_byPointer() is %d\n", *i);
}

void func_passString_ByRefference(const string & s)
{
    /*** 
     * Internally, values are passed to and from a function on a small data structure called a stack. 
     *  The stack is a relatively small space, and requires processing power to manage. 
     *  Passing large values to a function requires copying larger amounts of data on the stack. 
     *  This can be time-consuming, and it can cause the stack to overflow, which can crash your program and create a security vulnerability. 
     * 
     * So when you pass something larger than a simple value, you'll usually want to use a reference or a pointer. 
     * 
     * So as a more practical example,  Our function is now const string & s. 
     * So it's taking a reference to the string, but you notice that it's const, 
     *  ---> so it can't change it and it can't create side effects. 
     * 
     * And we'll just say down here, the value is %s. 
     * So that takes a C string, so we'll take s.c_str like that, and now when I build and run, you see it says the value is "this is a string!" 
     * 
     * So we've passed the string as a reference, we've done so safely with the const qualifier here, and that's very important. 
     * 
     * And we passed something relatively large. Obviously, this is not a very big string.
     *  
     * ---> All we're passing on the stack is the reference. And remember, internally, a reference is managed as a pointer, and so it's a relatively small amount of data that gets passed on the stack. 
     * 
     * */
    printf("The value is %s\n", s.c_str());
}

int main()
{
    int i = 30;
    printf("this is main() and i is %d\n", i);    
    func_byValue(i);
    printf("main i = %d\n", i);
    func_byRefference(i);
    printf("main i = %d\n", i);
    func_byPointer(&i);
    printf("main i = %d\n", i);


    string s = "this is a string";
    func_passString_ByRefference(s);

    return 0;
}

