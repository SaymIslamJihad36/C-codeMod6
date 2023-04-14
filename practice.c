//                                   </>
//                             SAYM ISLAM JIHAD
//                      STUDENT AT PHITRON SPRING 2023
//                           FB : SAYM ISLAM JIHAD
//                                   </>


//1) Write a C program to find maximum between two numbers.


#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a,b : ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d\n",a);
    }else if(a==b){
        printf("equal\n");
    }else{
        printf("%d\n",b);
    }

}

//2) Write a C program to find maximum between three numbers.

#include<stdio.h>

int main(void){
    int a,b,c;
    printf("Enter a,b,c : ");
    scanf("%d  %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("Maximum number is %d\n",a);
    }else if(b>a && b>c){
        printf("Maximum number is %d\n",b);
    }else{
        printf("Maximum number is %d\n",c);
    }
}


//3) Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>

int main(void){
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    if(a%5==0){
        printf("Divisible by 5");
        if(a%11==0){
            printf(" & 11\n");
        }
    }else if(a%11==0){
        printf("Divisible by 11\n");
    }else{
        printf("Not divisible by 5 and 11\n");
    }
}


// 4) Write a C program to check whether a year is leap year or not.

#include<stdio.h>

int main(void){
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    if(year%4==0){
        printf("This is Leap year\n");
    }else{
        printf("This is not Leap year\n");
    }
}


// 5) Write a C program to check whether a character is alphabet or not.

#include<stdio.h>

int main(){
    char alp;
    printf("Enter any charecter(atoz/AtoZ) : ");
    scanf("%c",&alp);
    if(alp>='A' && alp<='Z'){
        printf("Charecter is alphabet\n");
    }else if(alp>='a' && alp<='z'){
        printf("Charecter is not alphabet\n");
    }else{
        printf("Enter a valid charecter...\n");
    }
    return 0;
}


// 6) Write a C program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>

int main(){
    char alp;
    printf("Enter any char(A-Z) : ");
    scanf("%c",&alp);
    if(alp>='A' && alp<='Z'){
        if(alp=='A'||alp=='E'||alp=='I'||alp=='O'||alp=='U'){
            printf("Vowel\n");
        }else{
            printf("Consonant\n");
        }
    }else{
        printf("Enter a valid charecter...");
    }
}


// 7) Write a C program to input any character and check whether it is charecter, digit or special character.

#include<stdio.h>

int main(){
    char ch;
    printf("Enter : ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("This is a charecter\n");
    }else if(ch>='0' && ch<= '9'){
        printf("This is a digit\n");
    }else{
        printf("This is a special charecter\n");
    }
}


// 8) Write a C program to check whether a character is uppercase or lowercase alphabet.


#include<stdio.h>

int main(){
    char ch;
    printf("Enter char : ");
    scanf("%c",&ch);
    if(ch>='A' && ch <= 'Z'){
        printf("Uppercase\n");
    }else if(ch>='a' && ch <= 'z'){
        printf("Lowercase\n");
    }else{
        printf("Enter valid charecter...");
    }
}



// 9) Write a C program to input week number and print week day.

#include<stdio.h>

int main(){
    int week;
    printf("Enter week number(1-7) : ");
    scanf("%d",&week);
    if(week>=1){
        if(week==1){
            printf("Monday\n");
        }else if(week==2){
            printf("Tuesday\n");
        }else if(week==3){
            printf("Wednesday\n");
        }else if(week==4){
            printf("Thursday\n");
        }else if(week==5){
            printf("Friday\n");
        }else if(week==6){
            printf("Saturday\n");
        }else if(week==7){
            printf("Sunday\n");
        }
    }else{
        printf("Enter a valid day(1-7)");
    }
}


// 10) write a Program to print a number of days in a month

#include<stdio.h>

int main(){
    int month;
    printf("Enter  the number of month(1-12) : ");
    scanf("%d",&month);
    if(month==1){
        printf("january = 31 Day\n");
    }else if(month==2){
        printf("February = 28/29\n");
    }else if(month==3){
        printf("March = 31\n");
    }else if(month==4){
        printf("April = 30\n");
    }else if(month==5){
        printf("May = 31\n");
    }else if(month==6){
        printf("June = 30\n");
    }else if(month==7){
        printf("July = 31\n");
    }else if(month==8){
        printf("August = 31\n");
    }else if(month==9){
        printf("September = 30\n");
    }else if(month==10){
        printf("October = 31\n");
    }else if(month==11){
        printf("November = 30\n");
    }else if(month==12){
        printf("December = 31\n");
    }else{
        printf("Enter valid month please...");
    }
}


//---------------------Loop-------------------


// 1) Write a C program to print all natural numbers from 1 to n. – using while loop

#include<stdio.h>

int main(){
    int n;
    printf("Enter n for print natural numbers : ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
}



// 2) Write a C program to print all natural numbers in reverse (from n to 1). – using while loop

#include<stdio.h>

int main(){
    int n;
    printf("Enter n to revers natural numbers : ");
    scanf("%d",&n);
    int i=n;
    while(i>=1){
        printf("%d\n",i);
        i--;
    }
}
---
#include<stdio.h>

int main(){
    int n;
    printf("Enter n to revers natural numbers : ");
    scanf("%d",&n);
    int i=1;
    while(n>=i){
        printf("%d\n",n);
        n--;
    }
}

// 3) Write a C program to print all alphabets from a to z. – using while loop

#include<stdio.h>

int main(){
    char alp='A';
    while(alp<='Z'){
        printf("%c\n",alp);
        alp++;
    }
}


// 4) Write a C program to print all even numbers between 1 to 100. – using while loop

#include<stdio.h>

int main(){
    int n=1;
    while(n<=100){
        if(n%2==0){
            printf("%d\n",n);
        }
        n++;
    }
}


// 5) Write a C program to print all odd number between 1 to 100.

#include<stdio.h>

int main(){
    int n=1;
    while(n<=100){
        if(n%2!=0){
            printf("%d\n",n);
        }
        n++;
    }
}



//6) Write a C program to find sum of all natural numbers between 1 to n.

#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum : %d\n",sum);
}


// 7) Write a C program to find sum of all even numbers between 1 to n.

#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2){
        sum+=i;
    }
    printf("sum : %d\n",sum);
}


// 8) Write a C program to find sum of all odd numbers between 1 to n.

#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        sum+=i;
 
    }
    printf("sum : %d\n",sum);
}

// 9) Write a C program to print multiplication table of any number.

#include<stdio.h>

int main(){
    int n;
    int mlt;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        mlt = n*i;
        printf("%d * %d = %d\n",n,i,mlt);
    }
}


//10) Get input of 4 variables in differant datatypes
#include<stdio.h>

int main(){
    int a;
    long long b;
    float c;
    char d;
    scanf("%d %lld %f %c",&a,&b,&c,&d);
    printf("%d\n%lld\n%f\n%c\n",a,b,c,d);
}


// 11) Write a C program to count number of digits in a number.

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    for(;n>0;)
    {
        count++;
        n/=10;
    }
    printf("Digits of the n is : %d\n",count);
}


// 12) C program to find last digit of any number

#include<stdio.h>

int main(){
    int n;
    printf("Enter n number : ");
    scanf("%d",&n);
    int last_digit;
    last_digit = n%10;
    printf("Last digit is = %d\n",last_digit);
}


// 13) C program to find first digit of any number

#include<stdio.h>

int main()
{
    int n,first;
    printf("Enter n : ");
    scanf("%d",&n);
    first = n;
    for(;first>=10;){
        first = first/10;
    }
    printf("First digit is = %d\n",first);
}


// 14) C program to find first and last digit of any number

#include<stdio.h>

int main()
{
    int n,first,last;
    printf("Entet numbers : ");
    scanf("%d",&n);
    first = n;
    last = n%10;
    for(;first>=10;)
    {
        first = first/10;
    }
    printf("First digit is = %d\n",first);
    printf("Last digit is = %d\n",last);
}


#include<stdio.h>

int main()
{
    int n,first;
    printf("Enter n : ");
    scanf("%d",&n);
    first = n;
    for(;first>=10;){
        first = first/10;
    }
    printf("First digit is = %d\n",first);
}



#include<stdio.h>

int main()
{
    char x;
    scanf("%c",&x);
    int boro;
    if(x>='a' && x<='z'){
        boro = x-32;
        printf("%c\n",boro);
    }else{
        int choto = x+32;
        printf("%c\n",choto);
    }
    return 0;
}


// Write a C program to count total number of even and odd elements in an array.
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int countev = 0;
    int countodd = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            countev++;
        }else{
            countodd++;
        }
    }
    printf("The number of even number is : %d\n",countev);
    printf("The number of odd number is : %d\n",countodd);
    return 0;
}
