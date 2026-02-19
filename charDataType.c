#include <stdio.h>

// int main(){
//     char a = 'a';
//     char c;
//     printf("Value of a: %c\n",a);
//     a++;
//     printf("Value of a after increment: %c\n",a);
//     c = 99;
//     printf("Value of c: %c\n",c);
//     return 0;
// }

int main(){
    char a = 'a';
    int i;
    for (i=0;i<26;i++){
        printf("Character: %c\n",a);
        a++;
    }

}



// Size of char is 1 byte (8 bits) in C language.
// It can store any character from the ASCII table.
// It can also store small integers from -128 to 127 (signed) or 0 to 255 (unsigned).
// Characters are enclosed in single quotes (' ').
// When a char variable is incremented, it moves to the next character in the ASCII table.
// For example, 'a' (97) becomes 'b' (98) when incremented.
// A char variable can also be assigned an integer value, which corresponds to a character in the ASCII table.