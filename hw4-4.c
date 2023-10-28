
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k, max,mj,mk;
    scanf("%d", &n);
    int array[n][n];
    for (i = 0 ; i < n ; i++) for (j = 0 ; j < n ; j++) scanf("%d", &array[i][j]);
    for (i = 0 ; i < n ; i++){
        max = array[0][i];
        for (j = 0 ; j < n ; j++){
            for (k = 0 ; k < n ; k++){
                if (max <= array[i][j]){
                mj = j+1;
                mk = k+1;
                max = array[j][k];
                }
            }
            printf("\n%s%d%s%d", "boy ", mj, " pair with girl ", mk);
        }
        for (i = 0 ; i < n ; i++) array[mj][i] = 0;
        for (i = 0 ; i < n ; i++) array[i][mk] = 0;
    }
}
