#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
 #include <math.h>




int main(int argc, char **argv) {
    double gg = pow((double)(atoi(argv[1]) * atoi(argv[2]) * atoi(argv[3])), (double)(1.0/3.0));
    printf("%f\n",gg);
}

/* 
mbashenko-NAU-151.101-2variant-2task

clang task2.c -o task2.out

./task2.out 1 3 4
./task2.out 5 4 3
*/
