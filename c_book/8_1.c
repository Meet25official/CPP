#include<stdio.h>

int main(){
    int n;
    float m=0 , c=0;
    int xi=0, yi=0, xi2=0, xiyi=0;

    printf("How many Elements: ");
    scanf("%d",&n);
    int x_coord[n], y_coord[n];
    for(int i=0; i<n; i++){
        printf("Enter x and y coords. of point %d: ",i+1);
        scanf("%d %d", &x_coord[i], &y_coord[i]);
    }

    for(int i=0; i<n; i++){
        xi += x_coord[i];
        yi += y_coord[i];
        xiyi += x_coord[0] * y_coord[i];
        xi2 += x_coord[i] * x_coord[i];
    }
    printf("-------------\n");
    m = (((n*xiyi) - (xi*yi))/((n*xi2) - (xi*xi)));
    c = (yi - m * xi)/n;

    printf("y = %.2fx + %.2f", m, c);
    
    return 0;
}