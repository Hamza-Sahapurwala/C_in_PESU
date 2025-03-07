#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    /*Q1. Write a C program that takes an integer n (1 ≤ n ≤ 10) as input. The program should print an n × n multiplication table using nested for loops. */

    int n;

    printf("Enter a no. between 1 and 10:\n");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= i; j++)
        {
            printf("%d x %d = %d\n", j, j, j * j);
        }
    }

    /*Q2. Write a C program that takes a long long integer as input. The program should print the hexadecimal representation of the absolute value of the input along with the counts of vowels, consonants, and digits in its hexadecimal form. Use if-else statements and logical operators in your code.*/

    long long int n;

    char xeh[100], hex[100];

    int i = 0,d=0;
    
    printf("Enter a no.:\n");
    
    scanf("%lld", &n);

    while (n != 0)
    {
        d = n % 16;
        if (d<10)
        {
            xeh[i] = d + '0';
        }
        else{
            xeh[i] = d + 55; // * Converts 10-15 to A-F
        }
        n/=16;
        i++;
        d=0;
    }

    i = 0;

    for (int j = strlen(xeh) - 1; j >= 0; j--)
    {
        hex[i] = xeh[j];
        i++;
    }

    printf("%s\n", hex);

    /*Q3. Write a C program that takes an integer n (1 ≤ n ≤ 10) as input, calculates its factorial, and counts how many unique digits are present in its factorial result. Use nested loops and conditional checks.*/

    int n,c;

    printf("Enter a no. between 1 and 10:\n");

    scanf("%d", &n);

    int fact = (int) tgamma(n + 1);

    int count[] = {0,0,0,0,0,0,0,0,0};

    while (fact != 0)
    {
        int d = fact %10;

        if (count[d] == 0)
        {
            count[d]++;
        }
        
        fact/=10;
        
    }

    for (int i = 0; i < 9; i++)
    {
        c+=count[i];
    }

    printf("The no. of unique digits in the factorial are: %d\n", c);

    /*Q4. Create a pattern printer (using switch case and loops). Take user input for the choice of pattern to be printed. Only valid choice is 1. If the user's choice is 1, print Floyd’s triangle with numbers. Also take the number of rows as input from the user. For any other number for the user's choice print Invalid.*/

    int n;

    printf("Enter a no.:\n");

    scanf("%d", &n);

    switch (n)
    {
    case 1:
        int r,c=1;

        printf("Enter no. of rows:\n");

        scanf("%d", &r);

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d ",c);
                c++;
            }
            printf("\n");
        }
        
        break;
    
    default:
        printf("Invalid Choice!");
        break;
    }
}