#include <stdio.h>

int main(){
    int size_of_int = sizeof(int);
    int size_of_char = sizeof(char);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(double);
    int size_of_long = sizeof(long);
    int size_of_short = sizeof(short);

    printf("Size of int data type: %d\n",size_of_int);
    printf("Size of char data type: %d\n",size_of_char);
    printf("Size of float data type: %d\n",size_of_float);
    printf("Size of double data type: %d\n",size_of_double);
    printf("Size of long data type: %d\n",size_of_long);
    printf("Size of short data type: %d\n",size_of_short);
    return 0;
}
// This program demonstrates how to determine the size of various data types in C using the sizeof operator.
// It calculates and prints the size (in bytes) of int, char, float, double, long, and short data types.
// The program uses the C17 standard for compilation.
