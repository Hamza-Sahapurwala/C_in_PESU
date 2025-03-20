#include <stdio.h>

void Square(int *num)
{
    *num = (*num) * (*num);
}

int rev(int* arr, int n)
{

    int b = n-1;

    int temp;

    printf("the reversed array is:\n");

    for(int i=0;i< (n / 2);i++)
    {

        temp = *(arr + i);

        *(arr+i) = *(arr + b);

        *(arr + b) = temp;

        b--;
    }
}

int max(int* arr, int n)
{
    int max= *arr;

    for(int i=0;i<n;i++)
    {
        if(max < *(arr + i)){
            max = *(arr + i);
        }
    }

    return max;
}

int marks(int* arr, int n)
{
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(*(arr + i) >= 40){
            count++;
        }
    }

    return count;
}


int main()
{

    /* Q1. Write a C program that takes an integer as input, calculates its square using a function, and prints the result. The function should accept a pointer to an integer and modify the original value. */

    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    Square(&n);
    printf("The square of the entered integer is: %d\n", n);

    /* Reverse an Array.Write a program that reverses the elements of an array in place by passing the array to a function using a pointer. */

    int a[10]={1,2,3,4,5,6,7,8,9,0};

    rev(a,10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    
    /*Q3.Write a function in C that takes a pointer to an array and its size as parameters and returns the maximum element in the array. In the main() function, print the maximum value.*/

    int a[10]={1,2,3,4,5,6,7,8,9,0};

    printf("max is= %d\n",max(a,10));

    /*Q4. Student Marks Management System Problem: A university stores students' marks for a subject in an array. Use pointers to access and modify the array. Write a function that takes an array of student marks and counts how many students passed (marks >= 40) and how many failed.*/

    int std_marks[10]={10,20,30,40,50,60,70,80,90,100};

    printf("%d students have passed\n",marks(std_marks,10));
}