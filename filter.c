
// * Logic of Map in Python comes from C

#include <stdio.h>

void filter(int (*fnc)(),int* array,int n){ // * We create the filter function by ourselves

    for (int i = 0; i < n; i++)
    {
        if (fnc(*(array + i))){
            printf("%d\n",*(array + i));
        }
    }    

}

int mod3(int x){
    return (x%3==0)?1:0;
}

int main(){

    int a[] = {1,2,3,4,5,6};

    filter(&mod3, a, 6);

}