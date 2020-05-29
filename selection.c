#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main()
{
    int n,i,j,temp,min;
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
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
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