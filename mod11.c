// lexigraphical comparison
*/
// my own code

#include<stdio.h>

int main()
{
    char a[1000001],b[1000001];
    scanf("%s %s",a,b);
    for(int i=0;;i++)
    {
        if(a[i]=='\0'&&b[i]=='\0')
        {
            printf("same\n");
            break;
        }else if(a[i]!=b[i])
        {
            if(a[i]>b[i]){
                printf("B choto\n");
                break;
            }else
            {
                printf("A choto\n");
                break;
            }
        }
    }
    return 0;
}


#include<stdio.h>
int main()
{
    char a[1000001],b[1000001];
    scanf("%s %s",&a,&b);
    int i=0;
    while(1)
    {
        if(a[i]=='\0'&&b[i]=='\0')
        {
            printf("Same\n");
            break;
        }else if(a[i]=='\0')
        {
            printf("A choto\n");
            break;
        }else if(b[i]=='\0')
        {
            printf("B choto\n");
            break;
        }
        if(a[i]==b[i]){
            i++;
        }
        else if(a[i]<b[i])
        {
            printf("A choto\n");
            break;
        }else
        {
            printf("B choto\n");
            break;
        }
    }
    return 0;
}
