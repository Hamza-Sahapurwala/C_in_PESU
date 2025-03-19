#include <stdio.h>


void f(){
    printf("Hello");
}

int main(){

    // ! Pointing to a function in C is possible

    // * We can use it like this

    // * (return type of the function) (*nameofpointer) = &functionname;
    
    // * We can call the function using the pointer with this

    // * nameofpointer()

    void (*a)() = &f; // * Successfully created a function pointer

    a();


    // * This justifies the existence of functions which can return pointers :)
}