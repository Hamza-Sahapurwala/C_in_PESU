#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *f1; // ! Can't do f1,f2 as f2 is not recognized as a pointer
    FILE *f2;

    f1 = fopen("fileone.csv","w");
    f2 = fopen("filetwo.csv","a");

    char line[1024];
    
    while(fgets(line,1024,f1)){ // this get's each line from fileone

        fputs(strcat(line,"\n"),f2); // pastes each line to filetwo with \n

    }

}