#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <limits.h>
#include <math.h>
 
double recursion (int k ,int n,double ans) {
    if(k <= n) {
        ans += (1.0 / (( 2 * k -1)*(2 * k +1)) );
        k++;
        return recursion(k , n, ans);
    }
    return ans;
}


double cickle (int n) {
    double ans = 0;
    for  (int k = 1; k <= n; k++ ) {
        ans += (1.0 / (( 2 * k -1)*(2 * k +1)) );
    }
    return ans;
}
 
int main(int argc, char **argv) {
    double recur = recursion(1,atoi(argv[1]),0.0);
    double cickl = cickle(atoi(argv[1]));
    printf("цикл %f\n",cickl);
    printf("рекурсия %f\n",recur);
}

/* 
mbashenko-NAU-151.101-2variant-3task

clang task3.c -o task3.out

./task3.out 3 
./task3.out 2 
*/
