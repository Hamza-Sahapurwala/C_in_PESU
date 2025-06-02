#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student{

    int roll;
    char Name[];

}stud1;

struct Status{

    unsigned int bin1: 1; // 1 bit storage in bin1 (Can represent 0 or 1)

    unsigned int bin2: 2; // 2 bit storage

    signed int bin3: 1; // This represents sign of the no.
};

union LessMemoryUsed{ // Less space is used by using union, like variable a will be stored in variable b 

    char a[3]; // i.e. Memory is shared by individual members
    char b[100]; // altering one variable's value can change value of another variable

};

enum test{
    low, // value of zero will be assigned to this
    med, // value of 1 will be assigned to this
    high // value of 2 will be assigned to this

};

struct Node{
    int a;
    struct Node* next;
};

int main(int argc, char** argv[]){ // argc will have no. of arguments in command line and argv is all of them in string
    char x[]="pes"; //  x is pointer but can't increment it (here x is a const pointer)

    char* y="pes"; // this is read only, so can't change this. Also we can increment this pointer!

    int length = strlen(x);// = returns length of string but exludes NULL character

    // strcpy(a,b) = copies the value of b to a
    
    // strcat(a,b) = concatenates b to a

    // int location = strchr(a,ch) = returns address of ch in a, else NULL is returned

    // int compare = strstrcmp(a,b) = if a==b, returns 0, else 1 if a>b, else -1 if a<b

    char* x[10]; // read only array

    int* p = malloc(sizeof(int)); // * Space for 1 int type data is made

    int* p=calloc(3,sizeof(int)); // * Array of 3 elements for an integer array has been made

    int* p = (int*) realloc(p,4); // 4 more extra bytes has been added

    free(p); // Releasing allocated memory

    struct Student s[100]; // Array of structures

    struct Student* p= s; // Pointer to array of structures

    // ! File Handling

    FILE *f;

    f = fopen("test.csv","w");
    const char l[]="Hello";

    // EOF error if any of them fail

    char b= fgetc(f); // gets a character from file
    fputc(b,f); // puts a character into the file

    char line[1024];
    // String I/O Operations
    fgets(line, sizeof(line), f); // get's 1 line worth of data from file
    fputs(l,f); // puts a string

    // Formatted Read/Write Operations
    fscanf(f,"%[^\n]s",l); // get's a string from file
    fprintf(f,"%s" ,l); // prints the string on the file
    // The %s is important as it tells the structure of the write/read operations

    // Block read or write
    // Error of Zero for size<=0
    struct Student fo;
    fread(fo,int sizeofelementdatatype,int noofelementstoread,f);
    fwrite(fo,sizeof(struct Student), 1, f); // 1 cause there is 1 struct to write

    // Random access to a file
    fseek(f,10,SEEK_CUR); // Tells pointer to move 10 bytes ahead of current position
    // SEEK_CUR=Current position
    // SEEK_SET = Beginning of file
    // SEEK_END = end of file
    ftell(f); // returns pointer position
    rewind(f);// moves file pointer to beginning

    // Error Handling in Files

    int a = ferror(f); // Returns 1 or 0 depending on file operations
    clearerr(f); // clears the error
    feof(f); // checks for the end of file marker 

    // CSV file handling

    char* token;

    token=strtok(line,","); // This takes all the characters until , is reached

    // To take stuff after that, use NULL in place of line

    token = strtok(NULL,",");// Takes stuff after the first , till the next ,

    // Use fgets(line,sizeof(line),f) for CSV

    // Use while(fgets(line,sizeof(line),f)){} to get line by line

    // don't forget to use atoi to convert string to integer

    fclose(f);

    // ! Qualifiers

    // * Size Qualifier

    short int a; // 4 bytes -> 2 bytes (can also be used as short a;)

    long int a; // 4 bytes -> 8 bytes (can also be used as long a;)
    
    // * Sign Qualifier

    // Signed Qualifier= variable which can hold both + & - intgers

    // unsigned Qualifer = variable can only hold +ve no.
     
    // * Type Qualifier

    const int a =5; // Can't change value of a

    volatile int b =4; // Can be changed by hardware or compiler in its own and random way

    // char -> signed, unsigned

    // int -> short,long,signed,unsigned

    // double -> long

    // Float and void don't have any qualifiers associated with them

    // ! Preprocessor Directives

    // text substitution tool which instructs compiler to do required pre-processing before actual compilation

    // always begins with #

    // Types of preprocessors: Macros, File Inclusions, Conditional Compilation

    // * Macros:

    #define PI 3.14 // We defined the keyword PI with value 3.14

    // No memory allocation for Macros 

    // Can't change macros values using =

    // Can only change it using #define again

    // Macros doesn't have a type whihc enums have type int

    // * File Inclusion

    // We use at start: stdio.h, stdlib.h, string.h

    #include<conio.h>

    // * Conditional Compilation

    #ifdef // use it to check if macro exists or not
    #ifndef // use it to check if macro doesn't exist
    #if  // Acts like normal if else statements(don't put brackets)
    #elif
    #else
    #endif // ends the if else stuffs (put it at the end of the if else statements)

    // * Other directives

    #undef // used to undefine an existing macros

    #pragma startup functionname // function(s) to run when program is starting
    
    #pragma exit functionname // function(s) to run just before program is ending

    #pragma warn -rvl -par -rch // -<letters> = no warning & +<letters> = warnings are on
}