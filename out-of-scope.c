#include <stdio.h>
int main() {
    int *a;
    {
        int b = 42;
        a = &b;
    }
    printf("%d", *a); // UB!
    return 0;
}
