#include<stdio.h>

int main()
{
    int arr[3];
    arr[0]=100;
    arr[1]=200;
    arr[2]=500;
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    return 0;
}


#include<stdio.h>

int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        printf("arr[%d]\n",i);
    }
    return 0;
}


#include<stdio.h>

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

// some problem of array

// 1) Write a C program to print all negative elements in an array.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter n : ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++)
    {
        printf("Enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++)
    {
        if(arr[i]<0)
        {
            printf("%d negative number of this array %d\n",i,arr[i]);
        }
    }
    return 0;
}
