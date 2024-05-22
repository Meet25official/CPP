#include<stdio.h>
int main(){ 
    int i,j;

    int a[i][j];
    int b[i][j];
    int c[i][j] = {'0'};
    int d[i][j];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            {
                scanf("%d",&a[i][j]);
            }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    
    }
    c[i][j] += a[i][j]*b[i][j];
    printf("sum of array: %d ",c[i][j]);
}
