#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
 #include <math.h>

int main(int argc, char **argv) {
    int v1 = atoi(argv[1]);
    if(v1%2 == 0)
    printf("четко");
    else
    printf("не четко");

    return 0;
}


/* 
mbashenko-NAU-151

clang n32.c -o task.out

*/
