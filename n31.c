#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
 #include <math.h>

int main(int argc, char **argv) {
    double v1 = atoi(argv[1]);
    double v2 = atoi(argv[2]);
    double v3 = atoi(argv[3]);

    double ans = (double)(v1+v2+v3)/3;
    printf("%f\n",ans);
    return 0;
}


/* 
mbashenko-NAU-151

clang n31.c -o task.out

*/
