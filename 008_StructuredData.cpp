// struct.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

struct Employee {
    int id;
    const char * name;
    const char * role;
};

int main() {
    Employee joe = { 42, "Joe", "Boss" };
    Employee * e = &joe;
    
    printf("%s is the %s and has id %d\n",
           joe.name, joe.role, joe.id);
    
    //joe.id =10;
    //joe.name = "Goe";

    printf("%s is the %s and has id %d\n",
        e->name, e->role, e->id);
    return 0;
}
