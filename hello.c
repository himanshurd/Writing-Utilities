
#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 12;
    float y = 3.14;
    char* s = "Hello, World!";

    int n = 5, i;

    printf("X is %d, ", x);
    printf("Y is %f\n", y);
    printf("%s\n", s);

    for (i = 0; i <= 5; ++i) {
    printf("%d * %d = %d \n", i, n, n * i);
    }

    return 0;
}
