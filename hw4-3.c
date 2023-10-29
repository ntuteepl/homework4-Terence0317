#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j = 0, k = 0, car;
    while(scanf("%d", &n) != EOF){
        int array[2*n], s[n], d[n], dispatch = 0;
        for (i = 0 ; i < 2*n ; i++) scanf("%d", &array[i]);
        for (i = 0 ; i < 2*n ; i++){ //n為0或偶數時為發車時間 奇數為回程時間
            if (i == 0  || i % 2 == 0){
                s[j] = array[i]; //將發車時間存入s[n]陣列
                j += 1;
            }
            else{
                d[k] = array[i]; //將回程時間存入d[n]陣列
                k += 1;
            }
        }
        for (i = 0 ; i < n ; i++) if (0 < s[i] && s[i] < d[i] && d[i] <= 24) dispatch = 1;
        if (dispatch){
            car =  n;
            for (i = 0 ; i < n ; i++) for ( j = 0 ; j < n ; j++) if (s[i] < s[j] && d[i] <= s[j]) car -= 1;
            printf("\n%d", car);
        }
        else return 0;
    }
}
