#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *f;

    f = fopen("test.txt","r");

    char line[1024];

    while(fgets(line,1024,f)){

        printf("%s",line); // Don't put \n as the text in line already has one

    }

    fclose(f);

}