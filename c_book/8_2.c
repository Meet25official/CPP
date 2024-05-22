#include<stdio.h>
int main(){
    int i,j;
    int max_temp,min_temp;
    int temperatures[2][2];

    printf("enter temperature records: \n");

    for(i=0;i<2;i++){
        for ( j=0; j<2; j++)
        {
            scanf("%d",&temperatures[i][j]);
        }
    }
    max_temp = min_temp = temperatures[0][0];

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if (max_temp < temperatures[i][j])
            {
                max_temp=temperatures[i][j];
            }
            
            if (min_temp > temperatures[i][j])
            {
                min_temp=temperatures[i][j];
            }
        }
    }
    printf("the highest temp : %d\n",max_temp);
    printf("the lowest temp : %d\n",min_temp);

    return 0;
}