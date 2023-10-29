
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k, max,mj,mk;
    scanf("%d", &n);
    int array[n][n];
    for (i = 0 ; i < n ; i++) for (j = 0 ; j < n ; j++) scanf("%d", &array[i][j]);
    for (k = 0 ; k < n ; k++){
        max = array[0][0];
        for (i = 0 ; i < n ; i++){
            for (j = 0 ; j < n ; j++){
                if (max <= array[i][j]){
                mi = i+1;
                mi = j+1;
                max = array[i][j];
                }
            }
            printf("\n%s%d%s%d", "boy ", mj, " pair with girl ", mk);
        }
        for (k = 0 ; k < n ; k++) array[mi][i] = 0;
        for (k = 0 ; k < n ; k++) array[i][mj] = 0;
    }
}
