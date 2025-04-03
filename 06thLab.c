#include <stdio.h>

int maximum(int* arr, int n)
{
	int max=arr[0];
	
	for(int i=0;i<n;i++)
	{
		if (max < *(arr+i))
        {
            max=*(arr+i);
        }
        
	}

	return max;
}

int gcd(int a, int b){

    if(b!=0){
        return gcd(b, a % b);
    } 

    else{
     return a;
    }

}

int main(){

    // Q1. Take three no. as input and find the largest no. in between them.

    int a, b, c, max;

    printf("Enter three numbers : ");

    scanf("%d %d %d",&a, &b, &c);

    max = a;
    
    if (b>max && b>c){

        max = b;
    } 
    
    else if (c>max){
        
        max = c;

    } 
    
    printf("Maximum number is %d\n",max);

    // Q2.Print the pattern star pattern but with odd no. of stars only.

    int a;

    printf("Enter number of rows for pattern : ");

    scanf("%d",&a);

    for (int i=0; i<2*a; i=i+2){

    for (int j=0; j<=i; j++){

    printf("*  ");

    }

    printf("\n");

    }

    // Q3. Remove Duplicates from An Array.

	int arr[10]={5,6,2,3,7,7,4,6,2,3};

	int dict[10]={0,0,0,0,0,0,0,0,0,0};

	int res[10];

	int new=0;
	
	for(int i=0;i<10;i++)
	{
		if(dict[arr[i]]==0)
		{		
			dict[arr[i]]=1;
			res[new]=arr[i];
			new++;	
		}
	}
	
	for(int i=0;i<new;i++) {
        printf("%d\t",res[i]);
    }

	printf("\n");

    // Q4. A function which (using Pointers) takes an array and it’s length (not a pointer) and finds the largest no. in it.

	int a[10]={5,6,2,77,4,9,12,3};

	printf("max is= %d\n",maximum(a,8));

    // Q5. Find GCD(Greatest Common Divisor) of 2 no. using recursive functions.

    int a = gcd(5,10);

    printf("%d",a);

}
    