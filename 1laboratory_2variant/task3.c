#include <stdio.h>
#include <string.h>


double mx_pow(double n, unsigned int pow) {
    if (pow == 0)
        return 1;

    if (pow == 1)
        return n;

    return n *= mx_pow(n, pow - 1);
}

int main(int argc, char **argv) {
    int v1 = mx_pow(atoi(argv[1]),atoi(argv[2]));

    printf("%d\n",v1);
}

/* 
mbashenko-NAU-151.101-2variant-3task

clang task3.c -o task3.out

./task3.out 3 4
./task3.out 2 4
*/
