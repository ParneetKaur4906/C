// #include <stdio.h>
// #include <stdbool.h>

// int main(){
//     bool a = true;
//     bool b = false;
//     printf("True: %d\n", a);
//     printf("False: %d\n", b);
//     return 0;
// }
// This program demonstrates the use of the boolean data type in C.
// It includes the <stdbool.h> header file to use the 'bool' type and the 'true' and 'false' constants.
// The program initializes two boolean variables, 'a' and 'b', with true and false values respectively, and prints their integer representations (1 for true and 0 for false).

// #define bool int
// #define false 0
// #define true 1
// #include <stdio.h>

// int main(){
//     bool a = true;
//     bool b = false;
//     printf("True: %d\n", a);
//     printf("False: %d\n", b);
//     return 0;
// }
// This program demonstrates the use of boolean data type in C without using <stdbool.h>.
// It defines 'bool' as an alias for 'int', and 'true' and 'false' as 1 and 0 respectively using preprocessor directives.
// The program initializes two boolean variables, 'a' and 'b', with true and false values respectively, and prints their integer representations

#include <stdio.h>
typedef enum{false, true} bool;
int main(){
    bool a = true;
    bool b = false;
    printf("True: %d\n", a);
    printf("False: %d\n", b);
    return 0;
}
// This program demonstrates the use of boolean data type in C using an enumeration.
// It defines an enum type 'bool' with two values: 'false' (0) and 'true' (1).
// The program initializes two boolean variables, 'a' and 'b', with true and false values respectively, and prints their integer representations (1 for true and