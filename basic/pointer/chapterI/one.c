#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var = 10086;
    int *p = &var;

    printf("var address = %p\n", &var);
    printf("p value = %p\n", p);
    printf("p pointer value = %d\n", *p );

    int *pNull = NULL;
    printf("pNull value = %p\n", pNull);

    if (! pNull)
    {
        printf("pNull is null.\n");
    }
    

    return 0;
}
