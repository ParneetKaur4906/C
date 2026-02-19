#include <stdio.h>

int main(){
    const int intVal= 10;
    const float floatVal = 3.14;
    const double doubleVal = 3.141592653589793;
    const char charVal = 'A';

    printf("Integer Literal: %d\n",intVal);
    printf("Float Literal: %.2f\n",floatVal);
    printf("Double Literal: %.15lf\n",doubleVal);
    printf("Character Literal: %c\n",charVal);
    return 0;
}
// This program demonstrates the use of different literal data types in C.
// It defines constants for integer, float, double, and character literals and prints their values.
// The 'const' keyword is used to declare these literals as constants, meaning their values cannot be changed after initialization.
// The program uses the C17 standard for compilation.