#include<stdio.h>
#include<stdlib.h>


int main(){

    FILE *f;

    f = fopen("test.txt","a");

    char line[1024];

    printf("Enter Data to be appended to the test.txt file:\n");

    scanf("%[^\n]s",line);

    fprintf(f,"%s\n",line);

    fclose(f);
}