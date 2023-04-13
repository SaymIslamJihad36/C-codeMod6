// Module 7.5: Practice Day 02

// practice problem 1
#include<stdio.h>

int main()
{
  long long int n;
  scanf("%lld",&n);
  long long int arr[n];
  long long int sum = 0;
  for(int i=0;i<n;i++){
    scanf("%lld",&arr[i]);
  }
  for(int i=0;i<n;i++){
    sum = (sum)+(arr[i]);
  }
  if(sum<0){
    sum=(sum)*(-1);
    printf("%lld\n",sum);
  }else{
    printf("%lld\n",sum);
  }
}
// ------------------
// practice problem 2

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int x;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int answer=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x){
            answer = i;
            break;
        }
    }
    printf("%d\n",answer);
    return 0;
}

//---------------------------
// practice problem 3 

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            printf("1 ");
        }else if(arr[i]<0)
        {
            printf("2 ");
        }else
        {
            printf("0 ");
        }
    }
    return 0;
}

//-------------practice problem 4

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=10||arr[i]<=0){
            printf("A[%d] = %d\n",i,arr[i]);
        }
    }
    return 0;
}

// practice problem 5

#include<stdio.h>
#include<limits.h>

int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int mn=INT_MAX,pos;
  for(int i=0;i<n;i++)
  {
    if(arr[i]<mn)
    {
      mn=arr[i];
      pos = i+1;
    }
  }
  printf("%d %d\n",mn,pos);
}
