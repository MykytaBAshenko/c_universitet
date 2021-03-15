#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
 #include <math.h>

void print_nums(int v1, int v2) {
    for(;v1 < v2; v1++) {
        if(v1%2==0)
            printf("%d\n",v1);
    }
}

int main(int argc, char **argv) {
    int first = atoi(argv[1]);
    int second = atoi(argv[2]);
    if(first > second) {
        print_nums(second, first + 1);
    } 
    else {
        print_nums(first + 1, second);

    }
    return 0;
}


/* 
mbashenko-NAU-151

clang n35.c -o task.out

*/
