#include <cstdio>
#include <vector>
using namespace std;

int main() {
    vector<int> vi = { 1, 2, 3, 4, 5 };
    for(vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
        printf("int is %d\n", *it);
    }

    printf("\n\n\n");
    //easier to use 'auto' instead of 'vector<int>:iterator

    for(auto it = vi.begin(); it != vi.end(); ++it) {
    printf("int is %d\n", *it);
    }
    return 0;
}
