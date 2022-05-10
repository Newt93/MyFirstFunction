#include <stdio.h>

// My first function
void myfunc(void)
{
    printf("This is my first function");
}

// First int function
int mysum(int a, int b)
{
    return a + b
}

// Hello world
int main(int argc, char** argv)
{
    myfunc();
    int result = mysum(5, 5);
    printf("%i plus %i = %i\n", 10, 5, result);
    printf("Hello World!");
    return 0;
}