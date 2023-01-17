
#include <stdio.h>

int main()
{
    int x = 12;
    float y = 3.14;
    char* s = "Hello World";

    int n = 5, i;

    printf("X is %d\n", x);
    printf("Y is %f\n", y);
    printf("%s\n", s);

    for (i = 0; i <= 5; ++i) {
    printf("%d * %d = %d \n", i, n, n * i);
    }

    return 0;
}
