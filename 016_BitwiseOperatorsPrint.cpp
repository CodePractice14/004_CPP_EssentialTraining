#include <cstdio>
#include <cstdint>
using namespace std;

// unsigned 8-bit to string
const char * u8_to_cstr(const uint8_t & x) {
    static char buf[sizeof(x) * 8 + 1];
    for(char & c : buf) c = 0; // reset buffer
    char * bp = buf;
    for(uint8_t bitmask = 0b10000000; bitmask; bitmask >>= 1) {
        *(bp++) = x & bitmask ? '1' : '0';
    }
    return buf;
}

int main()
{
    uint8_t x = 5; //x is 00000101
    uint8_t y = 10; //y is 00001010
    printf("x is %s\n", u8_to_cstr(x));
    printf("y is %s\n", u8_to_cstr(y));


    /***
     *  So this expression has x or y and that's a binary or, a bitwise or, 
     *   and so you'll notice in the results that each of the bits in the result is the or of the corresponding bits in x and y. 
     *   So for example the least significant bit in x is a one and least significant bit in y is a zero and so the or of those two is a one.
     ***/
    uint8_t x_or_y = x | y; //Result: x | y is 00001111
    printf("x | y is %s\n", u8_to_cstr(x_or_y));


    /***
     * And if I change this or to an and, 
     *  you'll notice that there are no positions where both x and y has bits that are set
     *  and so when I save this and build and run, you'll see that none of the bits are set in the result. 
     * 
     *  If we change x to 7, now we'll get at least one bit where they're set in both of the values.
     ***/
    uint8_t x_and_y = x & y; //Result: x & y is 00000000
    printf("x & y is %s\n", u8_to_cstr(x_and_y));
    

    /***
     * There's also a bitwise x or, which is the caret symbol 
     *   and if I build and run this is an exclusive or
     *   so it only sets the bits and the results if the two bits are actually different in both of the op rounds. 
     * 
     * If we change x to 7, you'll notice the bit is only set in cases where the exclusive or is true. 
     ***/
    uint8_t x_xor_y = x ^ y; //Result: x ^ y is 00001111
    printf("x ^ y is %s\n", u8_to_cstr(x_xor_y));


    /***
     * There's also a bitwise not and so, the result will be all of the bits of y are flipped.
     *  So wherever there was a zero in y, there's a one in the result
     *  and wherever there's a one in y, there's a zero in the result.
     *  
     * It flips all of the bits. 
     ***/
    uint8_t not_y = ~y; //Result: ~y is 11110101
    printf("~y is %s\n", u8_to_cstr(not_y));


    /*** There's also shift operators. 
     *   So left shift by one and this
     *     will take all of the bits in y and shift them to the left by one 
     ***/
    uint8_t leftShift_y = y<<1; //Result: y<<1 is 00010100
    printf("y<<1 is %s\n", u8_to_cstr(leftShift_y));


    /*** and likewise there's a right shift operator. 
     *  And so this will shift all of the bits to the right by one.
     ***/
    uint8_t rightShift_y = y>>1; //Result: y>>1 is 00000101
    printf("y>>1 is %s\n", u8_to_cstr(rightShift_y));

    return 0;
}
