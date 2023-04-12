
// 1) solution-

#include<stdio.h>

int main()
{
    int N,l=-1;
    scanf("%d",&N);
    if(N>=2){
        for(int i=1;i<=N;i++){
            if(i%2==0){
                printf("%d\n",i);
            }
        }
    }else{
      printf("%d\n",l);
    }
    return 0;
}

// 2) solution:-

#include<stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    int even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            even++;
        }else
        {
            odd++;
        }
        if(a>0)
        {
            pos++;
        }else if(a<0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
    
    return 0;
}

// 3) sollution:-

#include<stdio.h>

int main()
{
    int n;
    for(;scanf("%d",&n)!= EOF;){
        if(n==1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    return 0;
}

// 4) sollution:-

#include<stdio.h>

int main()
{
    int n,a;
    int max=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(max<a){
            max = a;
        }
    }
    printf("%d\n",max);
    return 0;
}

// 5) sollution

#include<stdio.h>

int main()
{
    int n,mlt;
    scanf("%d",&n);
    for(int i=1;i<=12;i++){
        mlt = i*n;
        printf("%d * %d = %d\n",n,i,mlt);
    }
    return 0;
}
// 6) sollution:-
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
        do{
        printf("%d ",n%10);
        n/=10;
        }while(n!=0);
        printf("\n");
    }
    return 0;
}

// module 6.5 -----------------



// practice 1
#include<stdio.h>

int main()
{
    char x;
    scanf("%c",&x);
    int boro;
    if(x>='a' && x<'z'){
        boro = x+1;
        printf("%c\n",boro);
    }else if(x>='A'&&x<'Z'){
        int choto = x+1;
        printf("%c\n",choto);
    }else if(x=='z'){
        printf("a\n");
    }else{
        printf("A\n");
    }
    return 0;
}

// practice 2 

#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+b*c==d||a+b-c==d||a-b+c==d||a-b*c==d||a*b+c==d||a*b-c==d)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    return 0;
}


// practice 3 
#include<stdio.h>

int main()
{
    int vaj;
    scanf("%d",&vaj);
    for(int i=1;i<=vaj;i++)
    {
        if(vaj%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}


// practice 4;

#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int zero=0;
    int min = a-b;
    if(min>=0){
        printf("%d\n",min);
    }else{
        printf("%d\n",zero);
    }
    return 0;
}

// practice 5

#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int fast,last;
    fast = a%10;
    last = a/10;
    if(fast%last==0 || last%fast==0)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    return 0;
}




// Practice problem 6

#include<stdio.h>

int main()
{
  long long int a,b,c,mini;
  long long int count;
  long long int mina,minb,minc;
  scanf("%lld %lld %lld",&a,&b,&c); 
  if(a<b&&a<c){
    printf("%lld\n",a);
  }else if(b<a&&b<c){
    mini = b;
    mina = a-b;
    minb = b-b;
    minc = c-b;
    if(minb==0){
      long long int div = mina/2;
      if(div>=minc){
        long long int sum = minc+mini;
        printf("%lld\n",sum);
      }else if(div<minc){
        long long int sum1 = div+mini;
        printf("%lld\n",sum1);
      }
    }
  }else if(c<a&&c<b){
    printf("%lld\n",c);
  }
}

