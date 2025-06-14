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

typedef struct Node{
    int a;
    struct Node* next;
};

int main(int argc, char** argv[]){ // argc will have no. of arguments in command line and argv is all of them in string
    char x[]="pes"; //  x is pointer but can't increment it (here x is a const pointer)

    char* y="pes"; // this is read only, so can't change this. Also we can increment this pointer!

    int length = strlen(x);// = returns length of string but exludes NULL character

    strcpy(x,y);// = copies the value of y to b
    
    strcat(x,y);// = concatenates y to x

    int location = strchr(x,'p');// = returns address of ch in x, else NULL is returned

    int compare = strcmp(x,y); // = if ascii value x==y, returns 0, else 1 if of x>y, else -1 if x<y

    char* x[10]; // read only array

    int* p = (int *)malloc(sizeof(int)); // * Space for 1 int type data is made

    int* p=(int *)calloc(3,sizeof(int)); // * Array of 3 elements for an integer array has been made which has all values already initialized to 0

    int* p = (int*) realloc(p,4); // 4 more extra bytes has been added

    free(p); // Releasing allocated memory

    struct Student s[100]; // Array of structures

    struct Student* p= &s; // Pointer to array of structures

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

    fputs(l,f); // puts a string and doesn't auto add a \n

    // Formatted Read/Write Operations

    fscanf(f,"%[^\n]s",l); // get's a string from file

    // ! If we want to add stuff to file with more control, use below

    fprintf(f,"%s\n" ,l); // prints the string on the file (same like printf just that filepointer is the first input argument)

    fprintf(f,l);// above thing can be written like this cause it's a string(but \n won't be added automatically)

    // also doesn't add \n automatically(just like printf)

    // The %s is important as it tells the structure of the write/read operations

    // ! Use this for Binary Files

    // Block read or write

    // Error of Zero for size<=0

    struct Student data;

    fread(data,int sizeofelementdatatype,int noofelementstoread,f);

    fwrite(data,sizeof(struct Student), 1, f); // 1 cause there is 1 struct to write

    // ! Random access to a file

    fseek(f,10,SEEK_CUR); // Tells pointer to move 10 bytes ahead of current position

    // SEEK_CUR = Current position
    // SEEK_SET = Beginning of file
    // SEEK_END = end of file
    
    ftell(f); // returns pointer position

    rewind(f);// moves file pointer to beginning

    // Error Handling in Files

    int a = ferror(f); // Returns 1 or 0 depending on file operations (1 if everything is clear, 0 else)

    clearerr(f); // clears the error

    feof(f); // checks for the end of file marker 

    // CSV file handling

    char* token;

    token=strtok(line,","); // *This takes all the characters until , is reached

    // *To take stuff after that, use NULL in place of line

    token = strtok(NULL,",");// Takes stuff after the first , till the next ,

    // *Use fgets(line,sizeof(line),f) for CSV

    // *Use while(fgets(line,sizeof(line),f)){} to get line by line

    // ! Store the data line by line into a array of structure

    // ! Sort the array

    // ! use w mode to write the sorted array back into the structure

    // ! For searching, just do the line 125 step and then search through the array

    // don't forget to use atoi() to convert string to integer

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

    // *char -> signed, unsigned

    // *int -> short,long,signed,unsigned

    // *double -> long

    // *Float and void don't have any qualifiers associated with them

    // ! Preprocessor Directives

    // *text substitution tool which instructs compiler to do required pre-processing before actual compilation

    // *always begins with #

    // *Types of preprocessors: Macros, File Inclusions, Conditional Compilation

    // * Macros:

    #define PI 3.14 // We defined the keyword PI with value 3.14

    // *No memory allocation for Macros 

    // *Can't change macros values using =

    // *Can only change it using #define again

    // *Macros doesn't have a type which enums have type int

    // * File Inclusion

    // We use at start: stdio.h, stdlib.h, string.h

    #include<conio.h>

    // * Conditional Compilation

    #ifdef  // use it to check if macro exists or not
    #ifndef // use it to check if macro doesn't exist
    #if  1==1// Acts like normal if else statements(don't put brackets)
    #elif
    #else
    #endif // ends the if else stuffs (put it at the end of the if else statements)

    // * Other directives

    #undef // used to undefine an existing macros

    #pragma startup functionname // function(s) to run when program is starting
    
    #pragma exit functionname // function(s) to run just before program is ending

    #pragma warn -rvl -par -rch // -<letters> = warning are off & +<letters> = warnings are on

    // ! Environmental Variables

    // *Returns NULL if not found

    // * returns a string if found

    char ll[100] = getenv("PATH");// PATH refers to system path for executables

    //HOME, USER = Used in linux/macos, HOME is used to get user's home directory while USER is used to get username

    // USERNAME = windows only, gets username

    // TEMP = get's temporary directory
}