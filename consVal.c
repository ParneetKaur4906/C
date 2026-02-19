#include <stdio.h>
int main(){
    int not_constant;
    const int constant = 20;
    not_constant = 30; // This is allowed
    //constant = 22;// This will give error as we are trying to change the value of constant variable
    const int int_const = 25;
    const char char_const = 'A';
    const float float_const = 15.66;
    const char str_const[] = "Hello";
    printf("Not Constant: %d\n", not_constant);
    printf("Constant Integer: %d\n", constant);
    printf("Constant Integer 2: %d\n", int_const);
    printf("Constant Character: %c\n", char_const);
    printf("Constant Float: %.2f\n", float_const);
    printf("Constant String: %s\n", str_const);
    return 0;
}
// In C, the 'const' keyword is used to declare constant variables whose values cannot be changed after initialization.
// Attempting to modify a constant variable will result in a compilation error.
// Constant variables can be of any data type, including int, char, float, and arrays.
// They are typically used to define values that should remain unchanged throughout the program, enhancing code readability and maintainability.
// Using 'const' can also help prevent accidental modifications to variables that are meant to be constant.