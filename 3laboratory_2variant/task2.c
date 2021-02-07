#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
 #include <math.h>



int array_counter(int *arr,int len){
    int a = 0;
    for(int y = 0; y < len; y++)
        a+=arr[y];
    return a;
}


int main(int argc, char **argv) {
    int *arr = malloc((argc+1)*sizeof(int));
    for(int y = 1; y < argc; y++)
        arr[y-1] = atoi(argv[y]);
    printf("%d\n",array_counter(arr,argc-1));
}

/* 
mbashenko-NAU-151.101-2variant-2task

clang task2.c -o task2.out

./task2.out 1 3 4 -5 -1
./task2.out 5 4 3 -11111
*/
