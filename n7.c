  
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
#include <math.h>
 #include <stdio.h>




void mx_sort_arr_int(int *arr, int size) {
    bool flag = true;
    int temp;

    while(flag) {
        flag = false;
        for(int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                flag = true;
            }
        }
    }
}

int main(void)
{
    int aaa[10];
   for (int y = 0; y < 10; y++) {
       aaa[y] = rand()%19;
   }
   for(int u = 0; u < 10; u++)
    printf("%d, ", aaa[u] );
}



/* 
mbashenko-NAU-151.101
clang n7.c -o n7.out
./n7.out

*/
