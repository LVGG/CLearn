#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
    printf("This is about pointer ++\n\n");

    int var[] = {10, 100, 200};

    int i, *ptr;

    ptr = var;

    for ( i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, var[i]);
        printf("Value read from pointer[%p] = %d\n", ptr, *ptr);
        ptr++;
    }
    
    return 0;
}
