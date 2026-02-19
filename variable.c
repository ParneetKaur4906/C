// #include <stdio.h>
// void main(){
//     int x=10;
//     printf("%d",x);

// }
// int main(){function();}

#include <stdio.h>
int x = 20;
void function1(){printf("Function 1: %d\n", x);}
void function2(){printf("Function 2: %d\n", x);}

int main(){
    function1();
    function2();
    return 0;
}
// This program demonstrates the use of a global variable in C.
// A global variable 'x' is declared outside of any function, making it accessible to all functions within the file.
// Two functions, function1 and function2, print the value of the global variable 'x'.
// The main function calls both functions to display the value of 'x'.
// The program uses the C17 standard for compilation.