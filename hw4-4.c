#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,y,max,mx,my,i,j,k,t;
    scanf("%d",&n);
    int a[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
            max=a[0][0];
            for (x=0;x<n;x++)
            {
                for (y=0;y<n;y++)
                {
                    if (max<=a[x][y])
                    {
                        mx=x;
                        my=y;  // if a[x][y] is max,max[][]=a[mx][my]
                        max=a[x][y];
                    }
                }
            }

            printf("boy %d pair with girl %d\n",mx+1,my+1);

            for (k=0;k<n;k++)
            {
                a[mx][k]=0;
            }
            for (k=0;k<n;k++)
            {
                a[k][my]=0;
            }

    }
}
