#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
 #include <math.h>

int mx_strcmp(char *s1, char *s2) {
    while (*s1) {
        if (*s1 != *s2)
            break;
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}


int main(int argc, char **argv) {
    int v1 = atoi(argv[1]);
    char *c1 = argv[2];
    char *c2 = argv[3];

    if(mx_strcmp(c2, "v") == 0){
        int o = 0;
        while(o < v1) {
            o++;
            printf("%s\n", c1);
        }
    }
    if(mx_strcmp(c2, "g") == 0){
        int o = 0;
        while(o < v1) {
            o++;
            printf("%s", c1);
        }
        printf("\n");
    }
}


/* 
mbashenko-NAU-151

clang n32.c -o task.out

*/
