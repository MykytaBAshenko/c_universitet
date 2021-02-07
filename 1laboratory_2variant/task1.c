#include <stdio.h>
#include <string.h>


int main(int argc, char **argv) {
    int v1 = atoi(argv[1]);
    int v2 = atoi(argv[2]);
    int v3 = atoi(argv[3]);

    printf("Volume of a rectangular parallelepiped %d\n", v1*v2*v3);
}

/* 
mbashenko-NAU-151.101-2variant-1task

clang task1.c -o task1.out

./task1.out 1 2 3
./task1.out 3 2 3
*/
