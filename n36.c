#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
 #include <math.h>



int main(int argc, char **argv) {
    int first = atoi(argv[1]);
    int second = atoi(argv[2]);
    
    for(int v1 = 0; v1 < first; v1++) {
        for(int v2 = 0; v2 < second; v2++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/* 
mbashenko-NAU-151

clang n35.c -o task.out

*/
