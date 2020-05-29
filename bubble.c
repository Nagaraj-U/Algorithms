#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main()
{
    int n,i,j,temp;
    clock_t start,end;
    double totaltime;
    printf("\n enter the number of elements \n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=rand();
    }
    start=clock();
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
end=clock();
printf("sorted array :\n");
for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}
totaltime=(double)(end-start)/CLOCKS_PER_SEC;
printf("\n time taken %f ",totaltime);
}