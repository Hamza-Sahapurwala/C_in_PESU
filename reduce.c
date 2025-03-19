
// * Logic of Reduce in Python comes from C

#include <stdio.h>

void reduce(int (*su)(),int* array,int n){ // * We create the map function by ourselves

    int s=0;

    for (int i = 0; i < n; i++)
    {
        s = su(*(array + i));
    }    

    printf("%d\n",s);

}

int sum(int x){
    static int aa=0;
    aa+=x;
    return aa;
}

int main(){

    int a[] = {1,2,3,4,5};

    reduce(&sum, a, 5);

}