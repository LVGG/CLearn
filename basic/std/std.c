#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


struct Point
{
    int x, y;
};


void func(int *restrict a, int *restrict b) {
    *a = *b + 1;
}

int main(int argc, char const *argv[])
{
    int8_t a = 10; // 8-bit signed integer
    int16_t b = 1000; // 16-bit signed integer
    int32_t c = 100000; // 32-bit signed integer

    int *p = (int[]){1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, p[i]);
    }
    

    bool flag = true;
    if (flag)
    {
        printf("Flag is true\n");
    }
    

    
    struct Point pp = {.x=10, .y=20};
    struct Point * ppp = &pp;
    pp.x = 300;
    ppp->x= 3000;
    printf("Point x: %d, y: %d\n", ppp->x, ppp->y);

    return 0;
}
