#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k, max, mi, mj, t;
    scanf("%d", &n);
    int array[n][n];
    for (i = 0 ; i < n ; i++) for (j = 0 ; j < n ; j++) scanf("%d", &array[i][j]);
    for (k = 0 ; k < n ; k++){
        max = array[0][0];
        for (i = 0 ; i < n ; i++){
            for (j = 0 ; j < n ; j++){
                if (max <= array[i][j]){
                mi = i;
                mj = j;
                max = array[i][j];
                }
            }
        }
        printf("\n%s%d%s%d", "boy ", mi + 1, " pair with girl ", mj + 1);
        for (t = 0 ; t < n ; t++) array[mi][t] = 0;
        for (t = 0 ; t < n ; t++) array[t][mj] = 0;
    }
}
