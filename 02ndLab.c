#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){

// * Q1 Write a program to print the count of digits in a given positive number.

int a,n=0;

scanf("%d",&a);

while(a>0){
    int d = a%10;
    n++;
    a/=10;
}
printf("The count is: %d\n",n);

// * Q2 Write a program to print the count of even numbers in a given range. The lower and upper value in the range will be given as input.

int l,u,n=0;

printf("Enter lower and upper limit:\n");

scanf("%d%d",&l, &u);

for(int i = l; i<=u;i++){
    if(i%2==0){
        n++;
    }
}

printf("The count is: %d\n",n);

/* * Q3 Write a program in C to calculate the electricity bill for a household based
on the units consumed. The rate of electricity per unit varies as follows: For
the first 100 units, the rate is Rs. 2.50 per unit. For the next 200 units, the
rate is Rs. 4.00 per unit. For any additional units, the rate is Rs. 6.00 per
unit. The program should read the number of units consumed. Then,
calculate and display the total bill amount.
*/ 

int a=0,n=0;

printf("Enter the units:\n");

scanf("%d",&a);

for(int i = 0; i<=a;i++){

if(i<=100){
    n+=2.5;
}
else if (i>100 && i<=300)
{
    n+=4;
}

else{
    n+=6;
}
}

printf("The total bill is: %d\n",n);

/* Q4 Competitive Challenge: A strong number is one in which the sum of the
factorials of its digits equals the number itself (e.g., 145 = 1! + 4! + 5!).
Write a program to check if a given number is a strong number using
nested loops. */

int a=0,n=0,s=0;

printf("Enter no.:\n");

scanf("%d",&a);

n = a;

while (a>0)
{
    int d = a % 10;

    s+=(int) tgamma(d+1);

    a/=10;
}

if(s==n){
    printf("The no. is a strong no.");
}
else{
    printf("The no. is not a strong no.");
}

// * Q5 Write a program to print all the prime numbers, given the upper and lower limit

int l,u;

printf("Enter lower limit and upper limit:\n");

scanf("%d%d",&l,&u);

for (int i = l; i <= u; i++)
{
    if (i<=1){
        printf("%d\n",i);
    }
    
    for(int j = 2; j <= sqrt(i); j++){
        if (i%j==0){
            continue;
        }
    }
    printf("%d\n",i);
}


// * Q6 Write a program to print all the Armstrong numbers for given upper and lower limit

int l,u,n,s=0;

printf("Enter lower limit and upper limit:\n");

scanf("%d%d",&l,&u);

for (int i = l; i < u; i++)
{
    n=i;
    while(n>0){
        int d = n%10;
        s+=pow(d,3);
        n/=10;
    }
    if(s == i){
        printf("%d\n",i);
    }
    s=0;
    n=0;

}


// * Q7 write a program to find all the vowels in a given word

char in[20];
int n=0;

scanf("%s", &in);

for (int i = 0; i < strlen(in); i++)
{
    if (in[i] == "A" || in[i] == "E" || in[i] == "I" || in[i] == "O" || in[i] == "U" || in[i] == "a" || in[i] == "e" || in[i] == "i" || in[i] == "o" || in[i] == "u"){
        n++;
    }
    
}

printf("The no. of vowels is: %d\n",n);


/*Q8. write a program to create a calculator using switch statement for performing arithmetic operations 
input for the calculator program should be "operand1 operator operand2"
based on the operator relevant operation should be performed and result should be  printed.*/

int a,b;
char c;

scanf("%d%c%d",&a,&c,&b);

switch (c)
{
case '+':
    printf("%d\n",a+b);
    break;

case '-':
    printf("%d\n",a-b);
    break;

case '*':
    printf("%d\n",a*b);
    break;

case '/':
    printf("%d\n",a/b);
    break;

default:
    printf("Wrong Operator!\n");
    break;
}

}