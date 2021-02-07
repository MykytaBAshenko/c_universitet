#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void aaaa(int *arr, int *hh){
    if(arr[0] > arr[1] && arr[0] > arr[2])
    hh[0] = arr[0];
    else if(arr[1] > arr[2])
    hh[0] = arr[1];
    else
    hh[0] = arr[2];
}

int main(int argc, char **argv) {
    int *arr = malloc(3*sizeof(int));
    arr[0] = atoi(argv[1]);
    arr[1]=atoi(argv[2]);
    arr[2] =atoi(argv[3]);
    int *num = malloc(1*sizeof(int));
    aaaa(arr,num);
    printf("%d\n",num[0]);
}


/* 
mbashenko-NAU-151.101-2variant-1task

clang task1.c -o task1.out

./task1.out 7 2 4

*/
