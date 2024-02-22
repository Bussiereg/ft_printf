#include "ft_printf.h"
#include <stdio.h>

int main(){
    char a = 'c';
    char *b = "hello";
    int c = 10;
    void *d = &c;
    printf("---Printf---\n");
    int result1 = printf("hello world!\nTest char: %c\nTest string: %s\nTest int: %d\nTest Pointer: %p\n", a, b, c, d);
    printf("return value = %d\n", result1);
    printf("\n---ft_printf---\n");
    int result2 = ft_printf("hello world!\nTest char: %c\nTest string: %s\nTest int: %d\nTest Pointer: %p\n", a, b, c, d);
    printf("return value = %d\n", result2);

    return 0;
}