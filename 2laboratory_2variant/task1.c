#include <stdio.h>
#include <string.h>


int which_return(int v1, int v2){
    if(v1>v2)
        return v1;
    else
        return v2;
}

void print(int ddd);

int main(int argc, char **argv) {
    int v1 = atoi(argv[1]);
    int v2 = atoi(argv[2]);
    int gg = which_return(v1, v2);
    print(gg);
}


void print(int ddd){
    printf("The bigest %d\n",ddd);
}


/* 
mbashenko-NAU-151.101-2variant-1task

clang task1.c -o task1.out

./task1.out 1 2
./task1.out 23 0
*/
