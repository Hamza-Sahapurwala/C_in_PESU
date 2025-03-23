#include <stdio.h>

void swap(int* x, int* y);

void selectionsort(int* ar, int n);

/* ! Time Complexity: O(n^2), For all the cases as It will still have to travese the whole array

   ! Space Complexity: O(1)*/

/* * Three Variables are needed:
    i : Contains the position of the value which is waiting to be swapped

    pos : Contains the position of the value which is gonna be swapped
    
    j : Used to set the pos value by traversing the array */

int main(){

    int arr[10] = {9,7,4,5,6,2,1,0,3,8}; /* * Test Array */

    selectionsort(arr, 10);

    printf("The sorted array is:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

}

void selectionsort(int* ar, int n){

    int pos_min; /* * This will hold the position of the index which has the lowest element (Only for start of each loop that we set the index at the ith index) */

    for (int i = 0; i < n; i++)
    {
        pos_min = i;

        for (int j = 0; j < n; j++)
        {
            if (*(ar + pos_min) < *(ar + j)) /* * This will make it into an Ascending order list */
            {
                pos_min = j;
            }
            
            swap(ar + pos_min, ar + i); /* * Swaps the position */
        } 
    }
}

void swap(int* x, int* y){

    int temp = *x;

    *x = *y;

    *y = temp;
}