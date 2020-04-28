#include <cstdio>
#include <typeinfo>
using namespace std;

struct A { int x; };
struct B { int x; };

A a1;
B b1;

int main() {

    printf("type is %s\n", typeid(A).name());

    if(typeid(a1) == typeid(A)) {
        puts("same");
    } else {
        puts("different");
    }
    return 0;
}
