#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
#include <math.h>
 #include <stdio.h>


void arrgen(int n, int *nn) {
    for(int i=0;i<n;i++)
     nn[i]=rand()%10000000; 
}

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
   int sz;
   printf("Enter the size of array::");
   scanf("%d",&sz);
   int *array = malloc((sz + 1)*sizeof(int));
   arrgen(sz,array);
   printf("\nElements of the array::\n");
   for(int i=0;i<sz;i++){
     printf("Element number %d::%d\n",i+1,array[i]);
   }
   mx_sort_arr_int(array, sz);
   printf("\nElements of the sorted array::\n");

   for(int i=0;i<sz;i++){
     printf("Element number %d::%d\n",i+1,array[i]);
   }
   return 0;
}



/* 
mbashenko-NAU-151.101-2variant-3task

clang task4.c -o task4.out

./task4.out
>66
./task4.out  
>69
*/
