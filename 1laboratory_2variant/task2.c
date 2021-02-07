#include <stdio.h>
#include <string.h>


int main(int argc, char **argv) {
    int v1 = atoi(argv[1]);

    if(v1 == 12 || v1 == 1 || v1 == 2)
    printf("winter outside\n");
    if(v1 == 3 || v1 == 4 || v1 == 5)
    printf("spring outside\n");
    if(v1 == 6 || v1 == 7 || v1 == 8)
    printf("summer outside\n");
    if(v1 == 9 || v1 == 10 || v1 == 11)
    printf("autumn outside\n");
}

/* 
mbashenko-NAU-151.101-2variant-2task

clang task2.c -o task2.out

./task2.out 1
./task2.out 3
*/
