#include <stdio.h>

int main(){
    char m[100];
    scanf("%[z]s",m); /* * This only takes the letter z or some word that ends with z */
    printf("%s",m);

}