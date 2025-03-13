#include <stdio.h>

int main(){

    // Q1.Take length input for an array and for their elements and calculate the sum of the array.

    int n,s=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements : ");
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n;i++){
        s+=arr[i];
    }
    printf("The sum is: %d", s);

    // Q2.Take length input for an array and for their elements and find the occurrence of an input no. in the array.

    int n,a,count=0;
	printf("Enter length of matrix: ");
	scanf("%d",&n);
    int arr[n];
	for(int i=0;i<n;i++)
	{
        printf("enter array elements:\t");
		scanf("%d",&arr[i]);
	}
    printf("Enter no. to be found: ");
    scanf("%d",&a);
    for(int i=0;i<n;i++)
	{
        if(arr[i]==a){
            count+=1;
        }
	}
	printf("Count is %d\n",count);

    //Q3. Take n as input for a nxn matrix and calculate the diagonal sum.

    int n,sum=0;
	printf("Enter order of matrix: ");
	scanf("%d",&n);
    int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("enter array element:\t");
			scanf("%d",&arr[i][j]);
		}
	}
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j){
                sum+=arr[i][j];
            }
		}
	}
	printf("sum is %d\n",sum);

    //Q4. Take n as input for a nxn matrix and calculate the diagonal sum and anti-diagonal sum.

    int n,s1=0,s2=0;
	printf("Enter order of matrix: ");
	scanf("%d",&n);
    int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("enter array element:\t");
			scanf("%d",&arr[i][j]);
		}
	}
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j){
                s1+=arr[i][j];
            }
            if(i+j==n-1){
                s2+=arr[i][j];
            }
		}
	}
	printf("Sum of Diagonal is %d\n",s1);
	printf("Sum of Anti-Diagonal is %d\n",s2);
}