
// * Logic of Map in Python comes from C

#include <stdio.h>

void map(int (*squae)(),int* array,int n){ // * We create the map function by ourselves

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", squae(*(array + i)));
    }    

}

int square(int x){
    return x * x;
}

int main(){

    int a[] = {1,2,3,4,5};

    map(&square, a, 3);

}