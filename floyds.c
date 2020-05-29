#include<Stdio.h>

void main()
{
    int n;
    printf("enter number of vertices\n");
    scanf("%d",&n);
    int a[n][n];
    printf("enter array elements\n");
    int i=0,j=0,k=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int temp=0;
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                    temp=a[i][k]+a[k][j];
                    if(a[i][j]<=temp){
                        a[i][j]=a[i][j];
                    }else{
                        a[i][j]=temp;
                    }

            }
        }
    }
    printf("results is\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
