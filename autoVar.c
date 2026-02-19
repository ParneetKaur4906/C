#include <stdio.h>
void function(){
    int x = 10;
    auto int y = 20; // If you only donot initialize, it will have garbage value [auto int y;]
    printf("Auto Variable: %d",y);
}
int main(){
    function();
    return 0;
}
// In C, the 'auto' keyword is used to declare automatic variables.
// By default, all local variables are automatic, so using 'auto' is optional and rarely used.
// Automatic variables are created when the block in which they are defined is entered and destroyed when the block is exited.
// They have a local scope, meaning they can only be accessed within the block they are defined in.
// Automatic variables are typically stored on the stack.
// The 'auto' keyword can be used for clarity, but it does not change the behavior of the variable.
// In modern C programming, the 'auto' keyword is seldom used, as local variables are automatic by default.
