#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account, password, money, n, access = 0 ;
    int userinfo[6][3] =
    {
        { 123, 456, 9000 },
        { 456, 789, 5000 },
        { 789, 888, 6000 },
        { 336, 558, 10000 },
        { 775, 666, 12000 },
        { 566, 221, 7000 },
    };
    scanf("%d", &n);
    while(n){
        scanf("%d%d", &account, &password);
        for (int i = 0 ; i <= 5 ; i++){
            if (account == userinfo[i][0] && password == userinfo[i][1]){
                    printf("%d\n", userinfo[i][2]);
                    access = 1;
                    break;
                }
        }
        if (!access) printf("error\n");
        access = 0;
        n--;
    }
}

