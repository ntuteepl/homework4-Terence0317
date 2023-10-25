#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int array[n]; // begin from array[0] to array[n-1];
    if (n){
        for (int i = 0 ; i < n ; i++) scanf("%d", &array[i]);
        for (int i = 0 ; i < n ; i++){
            if (array[i] == 1) printf("NO ");
            else if (array[i] == 2) printf("YES ");
            else{
                for (int j = 2 ; j < array[i] ; j++){
                    if (array[i] % j == 0){
                        printf("NO ");
                        break;
                    }
                    else if (array[i] == j+1) printf("YES ");
                }
            }
        }
    }
}

