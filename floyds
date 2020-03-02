#include<stdio.h>
void main()
{
    int n;
    printf("enter the number of vertices\n");
    scanf("%d",&n);
    int a[n][n];
    int i=0,j=0,k=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                a[i][j]=a[i][j] || (a[i][k] && a[k][j]);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
