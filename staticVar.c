#include <stdio.h>
void function(){
    int x = 20;
    static int y = 30;
    x = x+10;
    y = y+10;
    printf("\tLocal: %d\n\tStatic: %d\n",x,y);
}
int main(){
    printf("First Call\n");
    function();
    printf("Second Call\n");
    function();
    printf("Third Call\n");
    function();
    return 0;
}
// In C, a static variable inside a function retains its value between multiple calls to that function.
// Unlike local variables, which are re-initialized each time the function is called, static
// variables are initialized only once and maintain their value for the lifetime of the program.
// Static variables have a local scope, meaning they can only be accessed within the function they are defined in.
// They are stored in a fixed memory location, which allows them to preserve their value across function calls.
// Static variables are useful for maintaining state information in functions without using global variables.