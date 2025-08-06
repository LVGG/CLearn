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


    int * pArray[3];
    int a = 1, b = 2, c = 3;

    pArray[0] = &a;
    pArray[1] = &b;
    pArray[2] = &c;

    for (int j = 0; j < 3; j++)
    {
        printf("Value of pArray[%d] = %d\n", j, *pArray[j]);
    }


    return 0;
}
